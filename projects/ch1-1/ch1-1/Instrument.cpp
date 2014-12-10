#include "Instrument.h"


Instrument::Instrument(std::string serialNumber, double price, InstrumentSpec spec)
    : serialNumber(serialNumber), price(price), spec(spec)
{
}


Instrument::~Instrument()
{
}

std::string Instrument::getSerialNumber(){
    return serialNumber;
}

double Instrument::getPrice(){
    return price;
}

void Instrument::setPrice(float newPrice){
    price = newPrice;
}

InstrumentSpec Instrument::getSpec(){
    return spec;
}
