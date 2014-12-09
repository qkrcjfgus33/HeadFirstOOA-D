#pragma once
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

