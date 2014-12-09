#pragma once
#include<iostream>

class GuitarSpec
{

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

