#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeoShape.h"

using namespace std;
class Rectangle: public GeoShape
{
    public:
        Rectangle(double height, double width);

        double calcArea() override;

        ~Rectangle();

};

#endif // RECTANGLE_H
