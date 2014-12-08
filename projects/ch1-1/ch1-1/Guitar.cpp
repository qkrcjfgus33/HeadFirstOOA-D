#include "Guitar.h"


Guitar::Guitar(std::string serialNumber, double price, GuitarSpec spec)
    : serialNumber(serialNumber), price(price), spec(spec)
{
}


Guitar::~Guitar()
{
}

std::string Guitar::getSerialNumber(){
    return serialNumber;
}

double Guitar::getPrice(){
    return price;
}

void Guitar::setPrice(float newPrice){
    price = newPrice;
}
