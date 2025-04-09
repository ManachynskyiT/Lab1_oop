// Price.h (Заголовковий файл)
#ifndef PRICE_H
#define PRICE_H

#include <iostream>

struct Price {
    int hryvnias;
    short int kopecks;

    Price(int h = 0, short int k = 0);
    Price operator+(const Price& other) const;
    Price operator*(int quantity) const;
    void round();
    void print() const;
};

#endif