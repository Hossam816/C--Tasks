#ifndef GEOSHAPE_H
#define GEOSHAPE_H

class GeoShape
{
protected:
    double dim1,dim2;

    public:
        GeoShape();
        GeoShape(double Dim1);
        GeoShape(double Dim1, double Dim2);

        //Setters
        void setDim1(double Dim1);
        void setDim2(double Dim2);

        //Getters
        double getDim1();
        double getDim2();

        virtual double calcArea() = 0;
        static double sumOfAllShapesArea(GeoShape& rectangle,GeoShape& square, GeoShape& circle);


        ~GeoShape();

};

#endif // GEOSHAPE_H
