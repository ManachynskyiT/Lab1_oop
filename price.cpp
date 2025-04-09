#include "Price.h"

// Конструктор
Price::Price(int h, short int k) : hryvnias(h), kopecks(k) {}

// Оператор додавання
Price Price::operator+(const Price& other) const {
    int totalKopecks = (hryvnias + other.hryvnias) * 100 + (kopecks + other.kopecks);
    return Price(totalKopecks / 100, totalKopecks % 100);
}

// Оператор множення
Price Price::operator*(int quantity) const {
    int totalKopecks = (hryvnias * 100 + kopecks) * quantity;
    return Price(totalKopecks / 100, totalKopecks % 100);
}

// Метод округлення
void Price::round() {
    if (kopecks >= 50) {
        hryvnias += 1;
        kopecks = 0;
    } else {
        kopecks = 0;
    }
}

// Метод виведення
void Price::print() const {
    std::cout << hryvnias << " uah " << kopecks << "`kop" << std::endl;
}
