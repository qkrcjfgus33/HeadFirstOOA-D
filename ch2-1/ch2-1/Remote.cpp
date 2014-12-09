#include "Remote.h"

Remote::Remote(DogDoor* door)
    : door(door)
{
}


Remote::~Remote()
{
}

void Remote::pressButton(){
    std::cout << "Pressing the remote control button...";
    if (door->isOpen()){
        door->close();
    }
    else{
        door->open();
    }
}
