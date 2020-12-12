#include <iostream>
#include "../Headers/Renault.h"

Renault::Renault(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

Renault::Renault() {}

void Renault::getPosition() {


    std::cout << "Renault is 6th in the championship!!\n";


}
