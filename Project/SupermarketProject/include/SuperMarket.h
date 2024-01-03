#ifndef SUPERMARKET_H
#define SUPERMARKET_H
#include <iostream>
#include <vector>
#include "juice.h"

using namespace std;

class SuperMarket
{
private:
    //vector here is a dynamic array with ability to resize itself automaticlly when an element inserted or deleted
    vector <Juice> juices;

public:
    //default constructor
    SuperMarket();

    void addJuice(Juice& juice);
    void removeJuice(string name);
    void displayJuices();
    void searchJuice(string name);

    void searchJuiceFile(string name);


    ~SuperMarket();
};

#endif // SUPERMARKET_H
