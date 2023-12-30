#include "Rectangle.h"

Rectangle::Rectangle(double height, double width) : GeoShape(height,width){}

double Rectangle::calcArea() {
    return getDim1() * getDim2();
}

Rectangle::~Rectangle()
{
    //dtor
}
