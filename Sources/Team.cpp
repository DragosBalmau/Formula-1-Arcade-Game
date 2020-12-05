#include "../Headers/Team.h"
#include <string>

Team::Team(const std::string &name, const std::string &color, const Pilot &primaryPilot, const Pilot &secondaryPilot, Engine engine)
        : name(name), color(color), primaryPilot(primaryPilot), secondaryPilot(secondaryPilot) {

    car.setEngine(engine);
    car.setColor(color);


}

Team::Team(){}


