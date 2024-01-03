#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
protected:
    int ID;
    string Name;
    string Email;
    string Password;
    public:
        Person(int id, string name,string email,string password);

        //Setters
        void setID(int id);
        void setName(string name);
        void setEmail(string email);
        void setPassword(string password);
        //Getters
        int getID();
        string getName();
        string getEmail();
        string getPassword();

        virtual void modifyEmail(string newEmail);
        virtual void changePassword(string newPassword);

        virtual void Display();

        ~Person();
};

#endif // PERSON_H
