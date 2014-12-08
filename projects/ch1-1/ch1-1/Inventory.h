#pragma once
#include<list>
#include"Guitar.h"
using namespace std;

class Inventory
{
private:
    list<Guitar*>* guitars;
public:
    Inventory();
    virtual ~Inventory();

    void addGuitar(string serialNumber, double price, GuitarSpec spec);
    Guitar* getGuitar(string serialNumber);
    list<Guitar*>* search(GuitarSpec searchGuitar);
};

