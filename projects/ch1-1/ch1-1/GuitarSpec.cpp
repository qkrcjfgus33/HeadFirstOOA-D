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

bool GuitarSpec::matches(InstrumentSpec otherSpec){
    if (!InstrumentSpec::matches(otherSpec)){
        return false;
    }
    if (typeid(otherSpec) != typeid(GuitarSpec)){
        return false;
    }

    GuitarSpec spec = (GuitarSpec)otherSpec;

    if (numStrings != 0 && numStrings != spec.getNumStrings()){
        return false;
    }

    return true;
}
