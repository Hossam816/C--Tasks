#include "Square.h"

Square::Square(double ribLength):GeoShape(ribLength, ribLength)
{
}

double Square::calcArea(){
    return getDim1() * getDim2();
}

Square::~Square()
{
    //dtor
}
