#include <iostream>
#include <Testawy.h>
using namespace std;

int main()
{
    Complex comp1(6,9),comp2(3,7);

    bool re = comp1 > comp2;
    bool re1 = comp1 < comp2;
    bool re2 = comp1 == comp2;

    cout << re << endl;
    cout << re1 << endl;
    cout << re2 << endl;

    cout<<"----------------------------"<<endl;


    cout<<"Real: "<<comp2.getReal()<<endl;
    cout<<"Imaginary: "<<comp2.getImag()<<endl;

            cout<<"----------------------------"<<endl;


    ++comp2;
     cout<<"Real: "<<comp2.getReal()<<endl;
    cout<<"Imaginary: "<<comp2.getImag()<<endl;

    cout<<"----------------------------"<<endl;


    cout<<"Complex1 Real = " <<comp1.getReal()<<endl;
    cout<<"Complex1 Imaginary = " <<comp1.getImag()<<endl;

    cout<<"Complex1 Real = " <<comp2.getReal()<<endl;
    cout<<"Complex1 Imaginary = " <<comp2.getImag()<<endl;

    cout<<"----------------------------"<<endl;

    Complex res = comp1 + comp2;

    cout<<"Complex1 Real = " <<res.getReal()<<endl;
    cout<<"Complex1 Imaginary = " <<res.getImag()<<endl;




    return 0;
}
