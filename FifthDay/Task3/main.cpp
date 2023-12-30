#include <iostream>
#include "GeoShape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int main()
{
    Rectangle rect1(9.0, 5.0);
    Square sqr(8.0);
    Circle circle(3.0);

    cout << "Rectangle Area = "<< rect1.calcArea()<< endl;
    cout << "Rectangle Area = "<< sqr.calcArea()<< endl;
    cout << "Rectangle Area = "<< circle.calcArea()<< endl;

    return 0;
}
