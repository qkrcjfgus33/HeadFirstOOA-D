#pragma once
class InstrumentSpec
{
public:
    InstrumentSpec();
    virtual ~InstrumentSpec();

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
};

