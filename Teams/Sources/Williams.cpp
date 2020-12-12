#include <iostream>
#include "../Headers/Williams.h"

Williams::Williams(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

Williams::Williams() {}

void Williams::getPosition() {

    std::cout << "Williams is 10th in the championship!!\n";

}
