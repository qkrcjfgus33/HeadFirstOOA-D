#pragma once
#include<iostream>
#include"InstrumentSpec.h"
using std::string;

class GuitarSpec : InstrumentSpec
{

public:
    GuitarSpec(BUILDER builder, string model, TYPE type, WOOD backWood, WOOD topWood, int numStrings);
    virtual ~GuitarSpec();

public:
    int getNumStrings();

    virtual bool matches(GuitarSpec spec);

protected:
    int numStrings;
};

