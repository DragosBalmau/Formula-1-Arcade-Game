#ifndef TEMEPOO_PILOT_H
#define TEMEPOO_PILOT_H
#include <string>

class Pilot {

private:
    std::string name;
    std::string team;
    std::string nationality;

    int age;

    int numberCar;
    int nrVictories;
    int nrPodiums;
    int nrRaces;
    int points;
    int nrChampionshipsWon;
    int salary;

public:

    Pilot operator=(Pilot const &pilot);

    Pilot();

    Pilot(const std::string name, std::string team, std::string nationality, int age, int salary,
          int numberCar, int nrVictories, int nrPodiums, int nrRaces, int points, int nrChampionshipsWon);

    Pilot(const Pilot &pilot);

    int finishRace(int position);

    void winTheChampionship();

    void setSalary(int salary);
    
    int getSalary();


};


#endif
