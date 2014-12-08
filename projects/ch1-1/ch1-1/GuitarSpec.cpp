#include "GuitarSpec.h"


GuitarSpec::GuitarSpec(BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood)
    :builder(builder), model(model), type(type), backWood(backWood), topWood(topWood)
{
}


GuitarSpec::~GuitarSpec()
{
}

std::string GuitarSpec::getModel(){
    return model;
}

GuitarSpec::BUILDER GuitarSpec::getBuilder(){
    return builder;
}

int GuitarSpec::getNumStrings(){
    return numStrings;
}

GuitarSpec::TYPE GuitarSpec::getType(){
    return type;
}

GuitarSpec::WOOD GuitarSpec::getBackWood(){
    return backWood;
}

GuitarSpec::WOOD GuitarSpec::getTopWood(){
    return topWood;
}

const std::string STR_NULL = "";
const GuitarSpec::BUILDER BUILDER_NULL = GuitarSpec::BUILDER::UUKNOWN;
const GuitarSpec::TYPE TYPE_NULL = GuitarSpec::TYPE::UUKNOWN;
const int INT_NULL = 0;
const GuitarSpec::WOOD WOOD_NULL = GuitarSpec::WOOD::UUKNOWN;

bool GuitarSpec::matches(GuitarSpec spec){
    std::string model = spec.getModel();
    GuitarSpec::BUILDER builder = spec.getBuilder();
    GuitarSpec::TYPE type = spec.getType();
    int numStrings = spec.getNumStrings();
    GuitarSpec::WOOD backwood = spec.getBackWood();
    GuitarSpec::WOOD topwood = spec.getBackWood();

    if (builder != BUILDER_NULL && builder != spec.getBuilder()){
        return false;
    }

    if (model != STR_NULL && model != spec.getModel()){
        return false;
    }

    if (type != TYPE_NULL && type != spec.getType()){
        return false;
    }

    if (numStrings != INT_NULL && numStrings != spec.getNumStrings()){
        return false;
    }

    if (backwood != WOOD_NULL && backwood != spec.getBackWood()){
        return false;
    }

    if (topwood != WOOD_NULL && topwood != spec.getTopWood()){
        return false;
    }

    return true;
}
