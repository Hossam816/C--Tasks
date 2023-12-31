#include "GeoShape.h"

GeoShape::GeoShape()
{}

GeoShape::GeoShape(double Dim1)
{
    dim1 = Dim1;
}


GeoShape::GeoShape(double Dim1, double Dim2)
{
    dim1 = Dim1;
    dim2 = Dim2;

}

//Setters

void GeoShape::setDim1(double Dim1){
    this->dim1 = Dim1;
}

void GeoShape::setDim2(double Dim2){
    this->dim2 = Dim2;
}

//Getters

double GeoShape::getDim1(){
    return dim1;
}
double GeoShape::getDim2(){
    return dim2;
}
//Calc Area Function

double GeoShape::calcArea(){
    return 0;
}

double GeoShape::sumOfAllShapesArea(GeoShape& rectangle, GeoShape& circle,GeoShape& square){
    return rectangle.calcArea() + circle.calcArea() + square.calcArea();
}



GeoShape::~GeoShape()
{
    //dtor
}
