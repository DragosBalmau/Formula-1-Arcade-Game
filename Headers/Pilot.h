#ifndef TEMEPOO_PILOT_H
#define TEMEPOO_PILOT_H
#include <string>

class Pilot {

private:

    std::string name;
    std::string country;

    int numberCar;
    int nrVictories;
    int points;

public:

   // Pilot operator=(Pilot const &pilot);

    Pilot(const std::string &name, const std::string &country, int numberCar);

    Pilot();

    Pilot(const Pilot &pilot);

    void finishRace(int position);

    void winTheChampionship();

};


#endif
