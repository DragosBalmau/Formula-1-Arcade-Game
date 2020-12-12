#include <iostream>
#include "../Headers/RacingPoint.h"

RacingPoint::RacingPoint(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

RacingPoint::RacingPoint() {}

void RacingPoint::getPosition() {

    std::cout << "RacingPoint is 4th in the championship!!\n";


}
