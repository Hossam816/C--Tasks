#include <iostream>
#include <string>


using namespace std;

class Employees {
private:
    int ID;
    std::string Name;
    float Salary;

public:
    // Constructor

    Employees() : ID(0), Salary(0.0f) {}

    // Function to set employee data
    void setData(int id, const std::string& name, float salary) {
        ID = id;
        Name = name;
        Salary = salary;
    }

    // Function to print employee data
    void printData() const {
        std::cout << "ID: " << ID << ", Name: " << Name << ", Salary: $" << Salary << std::endl;
    }
};

// Function to fill employee data
void employeeData(Employees* employees, int size) {
    int id;
    std::string name;
    float salary;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter Employee Details" << i + 1 << std::endl;
        std::cout << "Id: ";
        std::cin >> id;

        std::cout << "Name: ";
        std::cin>> name;

        std::cout << "Salary: ";
        std::cin >> salary;

        employees[i].setData(id, name, salary);
    }
}

// Function to print all employees
void printData(Employees* employees, int size) {
    for (int i = 0; i < size; i++) {
        employees[i].printData();
    }
}

int main() {
    int numberOfEmployees;
    std::cout << "Enter the number of employees: ";
    std::cin >> numberOfEmployees;

    // Dynamically allocate array of Employees
    Employees* employees = new Employees[numberOfEmployees];

    employeeData(employees, numberOfEmployees);
    printData(employees, numberOfEmployees);

    // Deallocate memory
    delete[] employees;

    return 0;
}
