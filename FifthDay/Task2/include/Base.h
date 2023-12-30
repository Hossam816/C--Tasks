#ifndef BASE_H
#define BASE_H
#include <iostream>

using namespace std;


class Base
{
    private:
        int X;
        int Y;
    public:
        Base();
        Base(int xVal, int yVal);

        int getX();
        void setX(int xVal);
        int getY();
        void setY(int xVal);

        virtual int sumNumbers();

        virtual void displayNumbers();


        ~Base();


};

#endif // BASE_H
