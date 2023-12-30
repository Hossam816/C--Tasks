#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"

using namespace std;

int main()
{
    Employee employee(1,"Hossam","ho","hosamitoo",5000);
    Student student(2,"Ahmed","ahmed","ahmaditoo",4.9);

    employee.modifyEmail("Cezar");
    student.modifyEmail("ElBob");


    employee.Display();

        cout << "-------------" << endl;


    student.Display();
    return 0;
}
