#ifndef TEMEPOO_PILOT_H
#define TEMEPOO_PILOT_H
#include <string>

class Pilot {

private:

    std::string name;
    std::string team;
    std::string country;

    int numberCar;
    int nrVictories;
    int points;

public:

   // Pilot operator=(Pilot const &pilot);

    Pilot(const std::string &name, const std::string &country, int numberCar);

    Pilot(const Pilot &pilot);

    int finishRace(int position);

    void winTheChampionship();



};


#endif