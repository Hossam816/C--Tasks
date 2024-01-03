#include "Student.h"
#include <iostream>

Student::Student(int id,string name,string email,string password,double gpa):Person(id,name,email,password),GPA(gpa)
{
    //ctor
}

void Student::setGpa(double gpa){
    this->GPA = gpa;
}

double Student::getGpa() {
    return GPA;
}


void Student::modifyEmail(string newEmail) {
    setEmail(newEmail + "@school.com");
}
void Student::Display() {
    Person::Display();
    cout<<"GPA: "<<GPA<<endl;
}

Student::~Student()
{
    //dtor
}
