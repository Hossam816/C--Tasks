#include <iostream>
#include "SuperMarket.h"


using namespace std;

int main()
{
    SuperMarket superMarket;

    Juice appleJuice("Apple Juice", 2.48, 50);
    Juice orangeJuice("Orange Juice", 9.48, 30);

    superMarket.addJuice(appleJuice);
    superMarket.addJuice(orangeJuice);
    bool searchAgaing = true;

    string textInput;

    while(searchAgaing){
        string juiceName;

        cout<<"Enter Juice Name: ";

        getline(cin, juiceName);
        superMarket.searchJuiceFile(juiceName);

        cout<<"Do You Wanna To Search Again Y/N ?";
        getline(cin, textInput);

        if(textInput != "y" && textInput != "Y"){
            searchAgaing= false;
        }

    }

    return 0;
}
