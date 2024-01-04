#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    int PNumber;
    string PName;
    float PPrice, PQty;
public:
    Product();
    void createProduct();
    void showProduct();

    ~Product();
};

#endif // PRODUCT_H
