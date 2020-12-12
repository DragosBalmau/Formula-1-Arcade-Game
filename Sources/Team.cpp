#include "../Headers/Team.h"
#include <string>
#include <iostream>

Team::Team(const std::string &name, const std::string &color, const Pilot &primaryPilot, const Pilot &secondaryPilot, Engine engine)
        : name(name), color(color), primaryPilot(primaryPilot), secondaryPilot(secondaryPilot), car(){

    car.setEngine(engine);
    car.setColor(color);

}

Team::Team():name(),color(),primaryPilot(),secondaryPilot(),car(){}

void Team::getPosition() {

    std::cout << "There are 10 teams in theo competition!!\n";

}

int Team::getPoints() const {
    return points;
}

void Team::setPoints(int mpoints) {
    Team::points = mpoints;
}

int Team::getNrVictories() const {
    return nrVictories;
}

void Team::setNrVictories(int mnrVictories) {
    Team::nrVictories = mnrVictories;
}

Team::~Team() {}

/*Team::Team(const Team &team2) {

    name = team2.name;
    color = team2.color;
    primaryPilot = team2.primaryPilot;
    secondaryPilot = team2.secondaryPilot;
    nrVictories = team2.nrVictories;
    points = team2.points;
    car = team2.car;

}*/




