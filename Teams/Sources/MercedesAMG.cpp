#include <iostream>
#include "../Headers/MercedesAMG.h"

MercedesAMG::MercedesAMG(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

MercedesAMG::MercedesAMG() {}

void MercedesAMG::getPosition() {

    std::cout << "Mercedes is 1st in the championship!!\n";

}
