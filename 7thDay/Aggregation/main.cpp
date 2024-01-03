#include <iostream>

using namespace std;


class Address{
  public:
       string City;
       string Country;
   Address(){
      City="Minia";
      Country="Egypt";
   }

};
class Employee{
   public:
       string Name;
       Address *ads;
       int ID;

       Employee()
       {

       }
        Employee(string name,int id,Address *ad)
       {
           Name=name;
           ID=id;
           ads=ad;
       }
       void Display()
       {
           cout<<"Name "<<Name<<endl;
           cout<<"ID "<<ID<<endl;
           cout<<"City"<<ads->City<<endl;
           cout<<"Country"<<(*ads).Country<<endl;
       }



};
int main()
{
    Address ad;
    Employee emp("hossam", 15, &ad);
    emp.Display();

    return 0;
}
