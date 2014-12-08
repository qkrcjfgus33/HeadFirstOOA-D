#include "Inventory.h"
using namespace std;


Inventory::Inventory()
{
    guitars = new list<Guitar*>();
}


Inventory::~Inventory()
{
}

void Inventory::addGuitar(string serialNumber, double price, GuitarSpec spec){
    Guitar* guitar = new Guitar(serialNumber, price, spec);
    guitars->push_back(guitar);
}

Guitar* Inventory::getGuitar(string serialNumber){
    list<Guitar*>::iterator i = guitars->begin();
    Guitar* guitar = nullptr;
    while (guitars->end() != i){
        guitar = *i;
        if (guitar->getSerialNumber() == serialNumber){
            return guitar;
        }
        i++;
    }

    return nullptr;
}

list<Guitar*>* Inventory::search(GuitarSpec searchGuitar){
    list<Guitar*>::iterator i = guitars->begin();
    list<Guitar*>* matchingGuitars = nullptr;
    Guitar* guitar = nullptr;

    while (guitars->end() != i){
        guitar = *i;
        GuitarSpec guitarSpec = guitar->getSpec();
        if (guitarSpec.matches(searchGuitar)){
            matchingGuitars->push_back(guitar);
        }
    }

    return matchingGuitars;
}