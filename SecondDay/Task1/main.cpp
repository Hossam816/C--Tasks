#include <iostream>

using namespace std;

class Complex{
private:
    double real;
    double imag;

public:
    Complex(double j=0.0,double l=0.0) :real(j),imag(l){}

    double getReal(){
        return real;
    }
    double getImag(){
        return imag;
    }

     void setReal(double j) {
        real = j;
    }

    void setImag(double l) {
        imag = l;
    }

    //Add Two Complex
    void add(double j,double l){
        real +=j;
        imag +=l;
    }
    void substract(double j,double l){
        real -=j;
        imag -=l;
    }
    void multiply(double j,double l){
        double newRealNumber = real*j-imag*l;
        double newImaginaryNumber = imag*l-real*j;
        real = newRealNumber;
        imag = newImaginaryNumber;


    }

    void printNumber(){
        std::cout<<std::endl<<"Real Number Is:"<<real<<std::endl;
        std::cout<<std::endl<<"Imaginary Number Is: "<<imag<<std::endl;
        std::cout<<std::endl<<"------------------------"<<std::endl;
    }


};


int main()
{
    Complex complexNumbers1(5.6,2.4);

    complexNumbers1.add(4,2);
    complexNumbers1.printNumber();

    complexNumbers1.substract(4,2);
    complexNumbers1.printNumber();

    complexNumbers1.multiply(4,2);
    complexNumbers1.printNumber();


    return 0;
}
