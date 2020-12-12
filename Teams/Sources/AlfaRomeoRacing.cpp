#include <iostream>
#include "../Headers/AlfaRomeoRacing.h"

AlfaRomeoRacing::AlfaRomeoRacing(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine){

    this->name=name;
    this->color=color;
    this->primaryPilot=primaryPilot;
    this->secondaryPilot=secondaryPilot;
    car.setEngine(engine);
    car.setColor(color);

}

AlfaRomeoRacing::AlfaRomeoRacing(){}

void AlfaRomeoRacing::AlfaRomeoRacing::getPosition() {

    std::cout << "AlfaRomeo is 9th in the championship!!\n";

}
