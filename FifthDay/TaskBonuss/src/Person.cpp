#include <iostream>

#include "Person.h"

using namespace std;


Person::Person(int id,string name,string email,string password)
{
    ID=id;
    Name = name;
    Email = email;
    Password = password;
}
//Setters

void Person::setID(int id){
    this->ID = id;
}
void Person::setName(string name){
    this->Name = name;
}
void Person::setEmail(string email){
    this->Email = email;
}
void Person::setPassword(string password){
    this->Password = password;
}

//Getters

int Person::getID(){
    return ID;
}
string Person::getName(){
    return Name;
}
string Person::getEmail(){
    return Email;
}
string Person::getPassword(){
    return Password;
}

void Person::modifyEmail(string newEmail) {
    setEmail(newEmail);
}

void Person::changePassword(string newPassword) {
    setPassword(newPassword);
}

void Person::Display(){
    cout<<"ID: "<<getID()<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"Email: "<<getEmail()<<endl;
    cout<<"Password: "<<getPassword()<<endl;
}


Person::~Person()
{
    //dtor
}
