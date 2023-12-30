#ifndef GEOSHAPE_H
#define GEOSHAPE_H




class GeoShape
{
private:
    double dim1,dim2;

    public:
        GeoShape();
        GeoShape(double Dim1);
        GeoShape(double Dim1, double Dim2);

        //Setters
        void setDim1(double dim1);
        void setDim2(double dim2);

        //Getters
        double getDim1();
        double getDim2();

        virtual double calcArea();

        ~GeoShape();

};

#endif // GEOSHAPE_H
