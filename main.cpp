// main.cpp (Основний файл)
#include "Price.h"
#include <fstream>

int main() {
    std::ifstream file("prices.txt");
    if (!file) {
        std::cerr << "Не вдалося відкрити файл!" << std::endl;
        return 1;
    }

    Price total;
    int hryvnias, quantity;
    short int kopecks;

    while (file >> hryvnias >> kopecks >> quantity) {
        Price itemPrice(hryvnias, kopecks);
        total = total + (itemPrice * quantity);
    }
    
    std::cout << "Загальна сума: ";
    total.print();
    total.round();
    std::cout << "Сума до оплати (після заокруглення): ";
    total.print();
    
    return 0;
}