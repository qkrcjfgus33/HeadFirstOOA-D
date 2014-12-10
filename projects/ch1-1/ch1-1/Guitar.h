#pragma once
#include<iostream>
#include"GuitarSpec.h"
#include"Instrument.h"


class Guitar : public Instrument<GuitarSpec>{
public:
    Guitar(std::string serialNumber, double price, GuitarSpec spec);
    virtual ~Guitar();
};