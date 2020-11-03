#include <iostream>
#include "Pilot.h"


Pilot Pilot::operator=(Pilot const &pilot) {


    this->salary = pilot.salary;

    return *this;
}

Pilot::Pilot() {

    printf("Pilot null created\n");

}


Pilot::Pilot(const std::string name, std::string team, std::string nationality, int age, int salary,
      int numberCar, int nrVictories, int nrPodiums, int nrRaces, int points, int nrChampionshipsWon) {

    this->name = name;
    this->team = team;
    this->nationality = nationality;
    this->age = age;
    this->salary = salary;
    this->numberCar = numberCar;
    this->nrVictories = nrVictories;
    this->nrPodiums = nrPodiums;
    this->nrRaces = nrRaces;
    this->points = points;
    this->nrChampionshipsWon = nrChampionshipsWon;

}

Pilot::Pilot(const Pilot &pilot) {

    name = pilot.name;
    team = pilot.team;
    nationality = pilot.nationality;
    age = pilot.age;
    salary = pilot.salary;
    numberCar = pilot.numberCar;
    nrVictories = pilot.nrVictories;
    nrPodiums = pilot.nrPodiums;
    nrRaces = pilot.nrRaces;
    points = pilot.points;
    nrChampionshipsWon = pilot.nrChampionshipsWon;

}


int Pilot::finishRace(int position) {

    switch (position) {
        case 1:
            points += 25;
            nrPodiums++;
            nrVictories++;
            break;
        case 2:
            points += 18;
            nrPodiums++;
            break;
        case 3:
            points += 15;
            nrPodiums++;
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
    nrRaces++;
}

void Pilot::winTheChampionship() {

    std::cout << name << " has won the 2020 F1 Championship!!!" << std::endl;
    nrChampionshipsWon++;

}

void Pilot::setSalary(int salary) {
    this->salary = salary;
}

int Pilot::getSalary() {
    return salary;
}

