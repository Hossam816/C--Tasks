#ifndef CIRCLE_H
#define CIRCLE_H
#include "GeoShape.h"



class Circle: public GeoShape
{

    public:
        Circle(double radiusLen);

        double calcArea() override;

        ~Circle();
};

#endif // CIRCLE_H
