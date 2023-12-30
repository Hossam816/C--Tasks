#include "Testawy.h"
#include <iostream>

using namespace std;

// Default constructor
Complex::Complex() {
    real = 0;
    imag = 0;
    // cout << "Default constructor called" << endl;
}

// Parameterized constructor
Complex::Complex(float r, float i) {
    real = r;
    imag = i;
    // Implementation...
}

// Overloading the '>' operator
bool Complex::operator>(Complex num) {
    return this->real > num.real;
}

// Overloading the '<' operator
bool Complex::operator<(Complex num) {
    return this->real < num.real;
}

// Overloading the '==' operator
bool Complex::operator ==(Complex num) {
    return (this->real == num.real) && (this->imag == num.imag);
}

Complex Complex::operator++(){
    real++;
    imag++;
    return *this;
}

Complex Complex::operator+(Complex num){
    Complex res;
    res.real = real + num.real;
    res.imag = imag + num.imag;
    return res;
}

//Getter Methods
float Complex::getReal(){
    return real;
}
float Complex::getImag() {
    return imag;
}

//Setter Method

void Complex::setReal(float r){
    real = r;
}
void Complex::setImag(float i){
    real = i;
}

// Destructor
Complex::~Complex() {
    // Destructor code, if needed
    // cout << "Destructor called" << endl;
}
