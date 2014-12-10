#pragma once
#include <iostream>
#include"Instrument.h"
#include "MandolinSpec.h"
using std::string;

class Mandolin
    : public Instrument
{
public:
    Mandolin(string serialNumber, double price, MandolinSpec spec);
    virtual ~Mandolin();
};

