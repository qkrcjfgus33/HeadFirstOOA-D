#include "InstrumentSpec.h"


InstrumentSpec::InstrumentSpec(BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood)
    :builder(builder), model(model), type(type), backWood(backWood), topWood(topWood)
{
}


InstrumentSpec::~InstrumentSpec()
{
}

string InstrumentSpec::getModel(){
    return model;
}

InstrumentSpec::BUILDER InstrumentSpec::getBuilder(){
    return builder;
}

InstrumentSpec::TYPE InstrumentSpec::getType(){
    return type;
}

InstrumentSpec::WOOD InstrumentSpec::getBackWood(){
    return backWood;
}

InstrumentSpec::WOOD InstrumentSpec::getTopWood(){
    return topWood;
}

const std::string STR_NULL = "";
const InstrumentSpec::BUILDER BUILDER_NULL = InstrumentSpec::BUILDER::UUKNOWN;
const InstrumentSpec::TYPE TYPE_NULL = InstrumentSpec::TYPE::UUKNOWN;
const int INT_NULL = 0;
const InstrumentSpec::WOOD WOOD_NULL = InstrumentSpec::WOOD::UUKNOWN;

bool InstrumentSpec::matches(InstrumentSpec spec){
    std::string model = spec.getModel();
    InstrumentSpec::BUILDER builder = spec.getBuilder();
    InstrumentSpec::TYPE type = spec.getType();
    InstrumentSpec::WOOD backwood = spec.getBackWood();
    InstrumentSpec::WOOD topwood = spec.getBackWood();

    if (builder != BUILDER_NULL && builder != spec.getBuilder()){
        return false;
    }

    if (model != STR_NULL && model != spec.getModel()){
        return false;
    }

    if (type != TYPE_NULL && type != spec.getType()){
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
