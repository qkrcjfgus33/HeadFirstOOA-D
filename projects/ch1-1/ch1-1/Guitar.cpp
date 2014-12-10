#include "Guitar.h"


Guitar::Guitar(std::string serialNumber, double price, GuitarSpec spec) 
    : Instrument(serialNumber, price, spec)
{
}


Guitar::~Guitar()
{
}