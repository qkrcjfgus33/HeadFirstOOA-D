#pragma once
#include<iostream>
#include"GuitarSpec.h"
#include"Instrument.h"
using std::string;


class Guitar 
    : public Instrument{
public:
    Guitar(string serialNumber, double price, GuitarSpec spec);
    virtual ~Guitar();
};