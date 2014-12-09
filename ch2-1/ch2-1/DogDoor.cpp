#include "DogDoor.h"


DogDoor::DogDoor()
{
    _open = false;
}


DogDoor::~DogDoor()
{
}

void DogDoor::open(){
    _open = true;
}

void DogDoor::close(){
    _open = false;
}

bool DogDoor::isOpen(){
    return _open;
}

