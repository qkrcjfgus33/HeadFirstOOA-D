#pragma once
#include<iostream>

class Instrument
{
public:
    Instrument();
    virtual ~Instrument();

public:
    void setPrice(float newPrice);
    std::string getSerialNumber();
    double getPrice();

protected:
    std::string serialNumber;
    double price;
};

