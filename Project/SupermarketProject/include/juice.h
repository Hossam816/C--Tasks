#ifndef JUICE_H
#define JUICE_H

#include <iostream>
#include <string>

using namespace std;


class Juice
{
   private:
       string name;
       double price;
       int quantity;

   public:
    //main Constructor
    Juice(string Name,double Price, int Quantity);

    //Setters & Getters
    string getName();
    double getPrice();
    int getQuantity();

    void setQuantity(int newQuantity);

    ~Juice();


};

#endif // JUICE_H
