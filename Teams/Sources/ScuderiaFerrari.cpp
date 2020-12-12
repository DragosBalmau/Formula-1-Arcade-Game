#include <iostream>
#include "../Headers/ScuderiaFerrari.h"

ScuderiaFerrari::ScuderiaFerrari(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine) {

    this->name = name;
    this->color = color;
    this->primaryPilot = primaryPilot;
    this->secondaryPilot = secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

ScuderiaFerrari::ScuderiaFerrari() {}

void ScuderiaFerrari::getPosition() {


    std::cout << "Ferrari is 2nd in the championship!!\n";


}
