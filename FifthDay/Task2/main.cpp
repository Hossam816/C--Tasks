#include <iostream>
#include <Base.h>
#include <Drived.h>

using namespace std;

int main()
{

    //Base base1(9,8);
    Drived drive1(4,6,16);

//    cout<<"Base 1:"<<endl;
//    base1.displayNumbers();
//
//    cout<<"Sum in Base:"<<base1.sumNumbers()<<endl;
//
//    cout<<"-------------------"<<endl;

    drive1.displayNumbers();

    cout<<"Sum = "<<drive1.sumNumbers()<<endl;

    return 0;
}
