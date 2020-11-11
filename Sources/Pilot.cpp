#include <iostream>
#include "../Headers/Pilot.h"


/*Pilot Pilot::operator=(Pilot const &pilot) {


    this->salary = pilot.salary;

    return *this;
}*/

Pilot::Pilot(const Pilot &pilot) {

    name = pilot.name;
    team = pilot.team;
    country = pilot.country;
    numberCar = pilot.numberCar;
    nrVictories = pilot.nrVictories;
    points = pilot.points;


}


int Pilot::finishRace(int position) {

    switch (position) {
        case 1:
            points += 25;
            nrVictories++;
            break;
        case 2:
            points += 18;
            break;
        case 3:
            points += 15;
            break;
        case 4:
            points += 12;
            break;
        case 5:
            points += 10;
            break;
        case 6:
            points += 8;
            break;
        case 7:
            points += 6;
            break;
        case 8:
            points += 4;
            break;
        case 9:
            points += 2;
            break;
        case 10:
            points += 1;
            break;
    }
}

void Pilot::winTheChampionship() {

    std::cout << name << " has won the 2020 F1 Championship!!!" << std::endl;

}

Pilot::Pilot(const std::string &name, const std::string &nationality, int numberCar) : name(name),
                                                                                       country(country), numberCar(numberCar) {}




