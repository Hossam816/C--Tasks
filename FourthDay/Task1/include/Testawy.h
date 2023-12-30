#ifndef TESTAWY_H
#define TESTAWY_H


class Complex
{
    private:
        float real;
        float imag;
    public:
        Complex();
        Complex(float r,float i);

        float getReal();
        float getImag();


        void setReal(float r);
        void setImag(float i);

        bool operator > (Complex num);
        bool operator < (Complex num);
        bool operator == (Complex num);
        Complex operator+(Complex num);
        Complex operator++();

        ~Complex();
};

#endif // TESTAWY_H
