#include "Drived.h"
#include <iostream>

using namespace std;

Drived::Drived()
{
    z=0;

    cout<<"-------------"<<endl;
}

Drived::Drived(int xVal,int yVal,int zVal):Base(xVal,yVal), z(zVal){}

void Drived::setZ(int zVal){
    this->z = zVal;
}

int Drived::getZ(){
    return z;
}
void Drived::displayNumbers(){
    Base::displayNumbers();
    cout<<"Drived Z: "<<z<<endl;
    cout<<"--------------"<<endl;
}

int Drived::sumNumbers(){
    return Base::sumNumbers() + z;
}

Drived::~Drived()
{
    //dtor
}
