#pragma once
#include<iostream>
using std::string;

template <typename Spec>
class Instrument
{
public:
    Instrument(string serialNumber, double price, Spec spec);
    virtual ~Instrument();

public:
    void setPrice(float newPrice);
    string getSerialNumber();
    double getPrice();
    Spec getSpec();

protected:
    string serialNumber;
    double price;
    Spec spec; //상속문제.
};

