#include "Product.h"

Product::Product(){}

void Product::createProduct() {

    cout<<"Enter Product Number:";
    cin>>PNumber;
    cout<<"Enter Product Name:";
    cin>>PName;
    cout<<"Enter Product Price:";
    cin>>PPrice;
    cout<<"Enter Product Quantitiy:";
    cin>>PQty;

}

void Product::showProduct(){

}

Product::~Product()
{
    //dtor
}
