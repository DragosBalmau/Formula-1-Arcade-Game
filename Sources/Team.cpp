#include "../Headers/Team.h"
#include <string>
#include <iostream>

Team::Team(const std::string &name, const std::string &color, const Pilot &primaryPilot, const Pilot &secondaryPilot, Engine engine)
        : name(name), color(color), primaryPilot(primaryPilot), secondaryPilot(secondaryPilot) {

    car.setEngine(engine);
    car.setColor(color);


}

Team::Team(){}

void Team::getPosition() {

    std::cout << "There are 10 teams in theo competition!!\n";

}

int Team::getPoints() const {
    return points;
}

void Team::setPoints(int points) {
    Team::points = points;
}

int Team::getNrVictories() const {
    return nrVictories;
}

void Team::setNrVictories(int nrVictories) {
    Team::nrVictories = nrVictories;
}

Team::Team(const Team &team2) {

    nrVictories = team2.nrVictories;
    points = team2.points;
    car = team2.car;
    primaryPilot = team2.primaryPilot;
    secondaryPilot = team2.secondaryPilot;
    color = team2.color;
    name = team2.name;

}




