#pragma once
#include<iostream>
#include"InstrumentSpec.h"
using std::string;

class Instrument
{
private:
    string serialNumber;
    double price;
    InstrumentSpec spec;

public:
    Instrument(string serialNumber, double price, InstrumentSpec spec);
    virtual ~Instrument();

public:
    void setPrice(float newPrice);
    string getSerialNumber();
    double getPrice();
    InstrumentSpec getSpec();
};

