#include <iostream>
#include "../Headers/Pilot.h"


Pilot::Pilot(std::string name, std::string country, int numberCar) : name(std::move(name)),
                                                                                   country(std::move(country)),
                                                                                   numberCar(numberCar) {

    std::cout << "pilot initializat\n";
}

Pilot::Pilot() = default;


Pilot& Pilot::operator=(Pilot const &pilot) {


    Pilot::name = pilot.name;
    Pilot::country = pilot.country;
    Pilot::numberCar = pilot.numberCar;
    Pilot::nrVictories = pilot.nrVictories;
    Pilot::points = pilot.points;

    return *this;
}

Pilot::Pilot(const Pilot &pilot) {

    Pilot::name = pilot.name;
    Pilot::country = pilot.country;
    Pilot::numberCar = pilot.numberCar;
    Pilot::nrVictories = pilot.nrVictories;
    Pilot::points = pilot.points;

}

void Pilot::finishRace(int position) {

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

        default:
            points += 0;
            break;

    }
}

void Pilot::winTheChampionship() {

    std::cout << name << " has won the 2020 F1 Championship!!!" << std::endl;

}





