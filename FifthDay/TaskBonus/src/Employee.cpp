#include <iostream>
#include "Employee.h"

using namespace std;
Employee::Employee(int id, string name, string email,string password, double salary):Person(id,name,email,password), Salary(salary)
{}

void Employee::setSalary(double salary)
 {
    this->Salary = salary;
 }

 double Employee::getSalary() {
    return Salary;
 }

 void Employee::modifyEmail(string newEmail) {
    setEmail(newEmail + "@company.com");
}

void Employee::Display() {
    Person::Display();
    cout<<"Employee Salary: "<<getSalary()<<endl;
}


Employee::~Employee()
{
    //dtor
}
