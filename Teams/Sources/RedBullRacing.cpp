#include <iostream>
#include "../Headers/RedBullRacing.h"

RedBullRacing::RedBullRacing(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

RedBullRacing::RedBullRacing() {}

void RedBullRacing::getPosition() {

    std::cout << "RadBullRacing is 3rd in the championship!!\n";


}
