#include <iostream>
#include "../Headers/AlphaTauri.h"

AlphaTauri::AlphaTauri(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

AlphaTauri::AlphaTauri() {};

void AlphaTauri::getPosition() {

    std::cout << "AlphaTauri is 7th in the championship!!\n";

}
