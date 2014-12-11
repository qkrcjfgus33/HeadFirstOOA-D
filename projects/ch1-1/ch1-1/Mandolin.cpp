#include "Mandolin.h"


Mandolin::Mandolin(std::string serialNumber, double price, MandolinSpec spec)
    : Instrument(serialNumber, price, spec)
{
}


Mandolin::~Mandolin()
{
}
