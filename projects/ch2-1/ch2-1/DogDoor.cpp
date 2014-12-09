#include "DogDoor.h"


DogDoor::DogDoor()
{
    _open = false;
}


DogDoor::~DogDoor()
{
}

void DogDoor::open(){
    std::cout << "The dog door opens.\n";
    _open = true;
}

void DogDoor::close(){
    std::cout << "The dog door closes.\n";
    _open = false;
}

bool DogDoor::isOpen(){
    return _open;
}

