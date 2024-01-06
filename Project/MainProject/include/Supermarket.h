// SuperMarket.h
#ifndef SUPERMARKET_H
#define SUPERMARKET_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class SuperMarket {
private:
    int ProductCode;
    float ProductPrice, ProductDiscount;
    string ProductName;

public:
    void appMenu();
    void admin();
    void buyer();
    void add();
    void edit();
    void removeItem();
    void listItem();
    void receiptItem();
};

#endif // SUPERMARKET_H
