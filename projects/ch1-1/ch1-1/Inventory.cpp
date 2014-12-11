#include "Inventory.h"
using namespace std;


Inventory::Inventory()
{
    inventory = new list<Instrument*>();
}


Inventory::~Inventory()
{
}

void Inventory::addInstrument(string serialNumber, double price, InstrumentSpec spec){
    Instrument* instrument = nullptr;
    if (typeid(spec) == typeid(GuitarSpec)){
        instrument = new Guitar(serialNumber, price, (GuitarSpec)spec);
    }
    else if (typeid(spec) == typeid(MandolinSpec)){
        instrument = new Mandolin(serialNumber, price, (MandolinSpec)spec);
    }
    inventory->push_back(instrument);
}

Instrument* Inventory::get(string serialNumber){
    list<Instrument*>::iterator i = inventory->begin();
    Instrument* instrument = nullptr;
    while (inventory->end() != i){
        instrument = *i;
        if (instrument->getSerialNumber() == serialNumber){
            return instrument;
        }
        i++;
    }

    return nullptr;
}

list<Guitar*>* Inventory::search(GuitarSpec searchGuitar){
    list<Instrument*>::iterator i = inventory->begin();
    list<Guitar*>* matchingGuitars = nullptr;
    Guitar* guitar = nullptr;

    while (inventory->end() != i){
        if (typeid(*i) == typeid(Guitar)){
            guitar = (Guitar*)(*i);
            GuitarSpec guitarSpec = guitar->getSpec();
            if (guitarSpec.matches(searchGuitar)){
                matchingGuitars->push_back(guitar);
            }
        }
    }

    return matchingGuitars;
}