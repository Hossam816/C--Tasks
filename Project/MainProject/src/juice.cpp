#include "juice.h"

Juice::Juice(string Name, double Price, int Quantity):name(Name),price(Price), quantity(Quantity){}

string Juice::getName(){
    return name;
}

double Juice::getPrice(){
    return price;
}

int Juice::getQuantity(){
    return quantity;
}

void Juice::setQuantity(int newQuantity){
    quantity = newQuantity;
}

Juice::~Juice(){}
