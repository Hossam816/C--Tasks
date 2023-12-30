#include "Circle.h"
#include <cmath>

Circle::Circle(double radiusLen):GeoShape(radiusLen, 0)
{
    //ctor
}

double Circle::calcArea() {
    return M_PI * getDim1() * getDim1();
}

Circle::~Circle()
{
    //dtor
}
