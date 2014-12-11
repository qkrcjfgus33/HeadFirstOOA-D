#include "MandolinSpec.h"


MandolinSpec::MandolinSpec(BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood, Style style)
    :InstrumentSpec(builder, model, type, backWood, topWood), style(style)
{
}


MandolinSpec::~MandolinSpec()
{
}

MandolinSpec::Style MandolinSpec::getStyle(){
    return style;
}

bool MandolinSpec::matches(InstrumentSpec otherSpec){
    if (!InstrumentSpec::matches(otherSpec)){
        return false;
    }
    if (typeid(otherSpec) != typeid(MandolinSpec)){
        return false;
    }

    MandolinSpec spec = (MandolinSpec)otherSpec;

    if (style != MandolinSpec::Style::UUKNOWN && style != spec.getStyle()){
        return false;
    }

    return true;
}

