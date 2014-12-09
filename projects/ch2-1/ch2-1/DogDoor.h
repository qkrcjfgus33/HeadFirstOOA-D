#pragma once
#include<iostream>

class DogDoor
{
private:
    bool _open;
public:
    DogDoor();
    virtual ~DogDoor();

    void open();
    void close();
    bool isOpen();
};

