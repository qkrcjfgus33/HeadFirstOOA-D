#pragma once
#include<iostream>
using std::string;

class InstrumentSpec
{
public:
    enum class BUILDER{
        UUKNOWN,
        FENDER,
        MARTIN,
        GIBSON,
        COLLINGS,
        OLSON,
        RYAN,
        PRS,
        ANY
    };
    enum class TYPE{
        UUKNOWN,
        ACOUSTIC,
        ELECTRIC
    };
    enum class WOOD{
        UUKNOWN,
        INDIAN_ROSEWOOD,
        BRAZILIAN_ROSEWOOD,
        MAHOGANY,
        MAPLE,
        COCOBOLO,
        CEDAR,
        ADIRONDACKM,
        ALDER,
        SITKA
    };

public:
    InstrumentSpec(BUILDER builder, string model, TYPE type, WOOD backWood, WOOD topWood);
    virtual ~InstrumentSpec();

public:
    string getModel();
    BUILDER getBuilder();
    TYPE getType();
    WOOD getBackWood();
    WOOD getTopWood();

    virtual bool matches(InstrumentSpec spec);

protected:
    string model;
    BUILDER builder;
    WOOD backWood, topWood;
    TYPE type;
};

