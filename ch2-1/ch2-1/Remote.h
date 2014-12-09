#pragma once
#include<iostream>
#include"DogDoor.h"

class Remote
{
public:
    Remote(DogDoor* door);
    virtual ~Remote();

    void pressButton();
private:
    DogDoor* door;
};

