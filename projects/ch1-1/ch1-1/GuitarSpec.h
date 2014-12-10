#pragma once
#include<iostream>
#include"InstrumentSpec.h"
using std::string;

class GuitarSpec 
    : public InstrumentSpec
{
private:
    int numStrings;

public:
    GuitarSpec(BUILDER builder, string model, TYPE type, WOOD backWood, WOOD topWood, int numStrings);
    virtual ~GuitarSpec();

public:
    int getNumStrings();

    virtual bool matches(InstrumentSpec spec);
};

