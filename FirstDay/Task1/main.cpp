#include <iostream>
#include <vector>

#include <string>

using namespace std;

struct Employes{

    int Id;
    std::string Name;
    float Salary;

};

void fillData(Employes *employee, int size){
    for (int i=0; i< size;i++){
        std::cout <<"Enter ID For Employee "<<i+1<<" :";
        std::cin >>employee[i].Id;
        std::cout <<"Enter Name For Employee "<<i+1<<" :";
        std::cin >>employee[i].Name;
        std::cout <<"Enter Salary For Employee "<<i+1<<" :";
        std::cin >>employee[i].Salary;
    }
}

//print employees

void printData(Employes *employee, int size){
    cout<<endl<<"Employee Data: "<<endl;
    for(int i= 0; i<size;i++){
        std::cout<<" -ID: "<<employee[i].Id<<std::endl<<" -Name: "<<employee[i].Name<<" -Salary: "<<employee[i].Salary<<std::endl;

    }
}

int main()
{
    int employeeNumber;
    std::cout<<"Enter The Number Of Employees: ";
    std::cin>>employeeNumber;


    //allocate array of the employee
    Employes *employee = new Employes[employeeNumber];
    fillData(employee,employeeNumber);
    printData(employee,employeeNumber);


    //free the memory
    delete[] employee;

    return 0;
}
