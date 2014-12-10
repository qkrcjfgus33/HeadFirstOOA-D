#pragma once
#include "InstrumentSpec.h"
class MandolinSpec :
    public InstrumentSpec
{
public:
    enum class Style{ A, B };

private:
    Style style;

public:
    MandolinSpec(BUILDER builder, string model, TYPE type, WOOD backWood, WOOD topWood, Style style);
    virtual ~MandolinSpec();

public:
    int getStyle();

    virtual bool matches(InstrumentSpec spec);
};

