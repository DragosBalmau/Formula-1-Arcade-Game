#include <iostream>
#include "../Headers/McLaren.h"

McLaren::McLaren(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

McLaren::McLaren() {}

void McLaren::getPosition() {

    std::cout << "McLaren is 5th in the championship!!\n";

}
