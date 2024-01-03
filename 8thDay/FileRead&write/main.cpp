#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    string line;

    ifstream myTextFile("readFile.txt");
    if(myTextFile.is_open())
    {
        while(getline(myTextFile, line)){
            cout<<line<<endl;
        }
        myTextFile.close();
    }else if(!myTextFile.is_open()){
        cout<<"File not found"<<endl;
    }
    else{
        cout<<"File not found";
    }


    ofstream myInputFile("inputFile.txt");
    if(myInputFile.is_open()){
        myInputFile<<"All Orders Confirmed"<<endl;
        myInputFile<<"Thanks For Choosen us"<<endl;
        myInputFile<<"Come Again!"<<endl;

    }
    else if(!myInputFile.is_open()){
        cout<<"File not found"<<endl;
    }
    else{
        cout<<"File not Found";
    }


    string inpString;
    ifstream showInputFile("inputFile.txt");
    if(showInputFile.is_open())
    {
        while(getline(showInputFile, inpString)){
            cout<<inpString<<endl;
        }
        showInputFile.close();
    }
    else if(!showInputFile.is_open()){
        cout<<"File not found"<<endl;
    }
    else{
        cout<<"File not found";
    }



    return 0;
}
