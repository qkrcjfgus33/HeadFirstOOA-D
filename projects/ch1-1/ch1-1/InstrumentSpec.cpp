#include "InstrumentSpec.h"


InstrumentSpec::InstrumentSpec(BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood)
    :builder(builder), model(model), type(type), backWood(backWood), topWood(topWood)
{
}


InstrumentSpec::~InstrumentSpec()
{
}
