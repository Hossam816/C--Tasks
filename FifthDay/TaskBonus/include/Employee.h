#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <Person.h>

class Employee : public Person
{
private:
    double Salary;
    public:
        Employee(int id,string name, string Email,string password, double salary);

        //Setters
        void setSalary(double salary);

        //Getters
        double getSalary();

        void modifyEmail(string newEmail) override;
        void Display() override;
        ~Employee();

};

#endif // EMPLOYEE_H
