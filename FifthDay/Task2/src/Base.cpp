#include "Base.h"
#include <iostream>

using namespace std;

Base::Base()
{
    X = 0;
    Y = 0;

}
Base::Base(int xVal,int yVal){
    this->X = xVal;
    this->Y = yVal;
}

int Base::sumNumbers() {
    return X+Y;
}

void Base::displayNumbers() {
    cout<<"First Num: "<<this->X<<endl;
    cout<<"Second Num: "<<this->Y<<endl;
}

//setter

void Base::setX(int xVal){
    this->X = xVal;
}

void Base::setY(int yVal){
    this->Y = yVal;
}

//getter

int Base::getX(){
    return X;
}
int Base::getY(){
    return Y;
}





Base::~Base()
{
    //dtor
}
