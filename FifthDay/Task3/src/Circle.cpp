#include "Circle.h"

Circle::Circle(double radiusLen):GeoShape(radiusLen, 0)
{
}

double Circle::calcArea() {
    return 3.14 * getDim1() * getDim1();
}

Circle::~Circle()
{
    //dtor
}
