#ifndef SQUARE_H
#define SQUARE_H

#include "GeoShape.h"


class Square : public GeoShape
{
    public:
        Square(double ribLength);

         double calcArea() override;
        ~Square();
};

#endif // SQUARE_H
