#pragma once
#include<list>
#include"Instrument.h"
#include"InstrumentSpec.h"
#include"Guitar.h"
#include"GuitarSpec.h"
#include"Mandolin.h"
#include"MandolinSpec.h"
using namespace std;

class Inventory
{
private:
    list<Instrument*>* inventory;
public:
    Inventory();
    virtual ~Inventory();

    void addInstrument(string serialNumber, double price, InstrumentSpec spec);
    Instrument* get(string serialNumber);

    list<Guitar*>* search(GuitarSpec searchGuitar);
    list<Mandolin*>* search(MandolinSpec searchMandolin);
};

