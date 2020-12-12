#include <iostream>
#include "../Headers/Haas.h"

Haas::Haas(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

Haas::Haas() {}

void Haas::getPosition() {

    std::cout << "Haas is 8th in the championship!!\n";

}
