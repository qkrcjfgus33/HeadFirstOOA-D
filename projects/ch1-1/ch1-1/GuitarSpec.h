#pragma once
#include<iostream>

class GuitarSpec
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
    GuitarSpec(BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood);
    virtual ~GuitarSpec();

public:
    std::string getModel();
    BUILDER getBuilder();
    int getNumStrings();
    TYPE getType();
    WOOD getBackWood();
    WOOD getTopWood();

    bool matches(GuitarSpec spec);

private:
    std::string model;
    BUILDER builder;
    int numStrings;
    WOOD backWood, topWood;
    TYPE type;
};

