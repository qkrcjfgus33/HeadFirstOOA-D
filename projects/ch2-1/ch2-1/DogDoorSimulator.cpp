#include "DogDoorSimulator.h"

void main(){
    DogDoor* door = new DogDoor();
    Remote* remote = new Remote(door);
    std::cout << "Fido barks to go outside...\n";
    remote->pressButton();
    std::cout << "Fido has gone outside...\n";
    remote->pressButton();
    std::cout << "Fido\'s all done...\n";
    remote->pressButton();
    std::cout << "Fido\'s back inside...\n";
    remote->pressButton();
}
