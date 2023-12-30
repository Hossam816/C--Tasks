#ifndef STUDENT_H
#define STUDENT_H
#include <Person.h>

class Student : public Person
{
private:
    double GPA;

    public:
        Student(int id, string name,string email, string password, double gpa);

        void setGpa(double gpa);
        double getGpa();

        void modifyEmail(string newEmail) override;
        void Display() override;
        ~Student();
};

#endif // STUDENT_H
