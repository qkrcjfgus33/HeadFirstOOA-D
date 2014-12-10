#include "GuitarSpec.h"


GuitarSpec::GuitarSpec(BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood, int numStrings)
    :InstrumentSpec(builder, model, type, backWood, topWood), numStrings(numStrings)
{
}


GuitarSpec::~GuitarSpec()
{
}

int GuitarSpec::getNumStrings(){
    return numStrings;
}

bool InstrumentSpec::matches(InstrumentSpec spec){
    int numStrings = spec.getNumStrings();

    if (numStrings != INT_NULL && numStrings != spec.getNumStrings()){
        return false;
    }

    return true;
}
