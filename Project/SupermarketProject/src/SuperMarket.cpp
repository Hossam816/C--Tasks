#include "SuperMarket.h"
#include <iostream>
#include <algorithm> // Include this header for std::remove_if
#include <fstream> //for read and get data from file
#include <sstream> //



using namespace std;

SuperMarket::SuperMarket(){}

void SuperMarket::addJuice(Juice& juice){
    juices.push_back(juice); //this method push elements into vector from back
}

void SuperMarket::removeJuice(string name) {
    juices.erase(remove_if(juices.begin(), juices.end(),
                           [name](Juice& j) { return j.getName() == name;}),
    juices.end());
}

void SuperMarket::displayJuices() {
    for(auto& juice:juices){
        cout<<"Name: "<<juice.getName()<<endl;
        cout<<"Price: "<<juice.getPrice()<<endl;
        cout<<"Quantity: "<<juice.getQuantity()<<endl;

    }
}

void SuperMarket::searchJuice(string name){
    auto item = find_if(juices.begin(), juices.end(),
                           [&name](Juice& j) { return j.getName() == name;});
    if(item != juices.end()){
        cout<< "Juice Found: " <<item->getName()<<endl;
        cout<< "Price: " <<item->getPrice()<<endl;
        cout<< "Quantity: " <<item->getQuantity()<<endl;
    }else{
        cout<<"->sorry we ran out of"<<name<<endl<<endl;

        cout<<"->but you can search for others juices and i hope you will find it"<<endl;
    }
}
//function use to search in text file to bring data
void SuperMarket::searchJuiceFile(string name){
    ifstream juicesList("JuiceList.txt");
    if(!juicesList.is_open()){
        cerr<<"File Not Found."<<endl;
        return;
    }
    string line;
    bool isFound = false;
    while(getline(juicesList, line)){
        stringstream ss(line);
        string juiceName, price, quantity;
        getline(ss,juiceName,',');
        getline(ss,price,',');
        getline(ss,quantity,',');

        if(juiceName == name) {
            cout<<"Juice: "<<juiceName<<"\nPrice: "<<price<<"\nQuantity: "<<quantity<<endl;
            isFound = true;
            break;
        }
    }

    if(!isFound){
        cout<<"Oops, This Item Not Found: "<<name<<endl;
    }
    juicesList.close();


}



SuperMarket::~SuperMarket(){}
