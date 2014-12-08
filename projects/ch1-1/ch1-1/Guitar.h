#pragma once
#include<iostream>
#include"GuitarSpec.h"

class Guitar{
public:
    Guitar(std::string serialNumber, double price, GuitarSpec spec);
    virtual ~Guitar();

public:
    void setPrice(float newPrice);
    std::string getSerialNumber();
    double getPrice();
    GuitarSpec getSpec();

private:
    std::string serialNumber;
    double price;
    GuitarSpec spec;
};