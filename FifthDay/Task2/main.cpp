#include <iostream>
#include <Base.h>
#include <Drived.h>

using namespace std;

int main()
{

    Base base1(5,9);
    Base *basePtr;
    Drived drive1(4,6,16);
    basePtr = &drive1;

    basePtr->displayNumbers();
//    cout<<"Base 1:"<<endl;
//    base1.displayNumbers();
//
//    cout<<"Sum in Base:"<<base1.sumNumbers()<<endl;
//
//    cout<<"-------------------"<<endl;


    cout<<"Sum = "<<drive1.sumNumbers()<<endl;
    cout<<"SumBase = "<<base1.sumNumbers()<<endl;

    return 0;
}
