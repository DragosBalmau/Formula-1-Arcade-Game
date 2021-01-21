#ifndef TEMEPOO_PILOT_H
#define TEMEPOO_PILOT_H
#include <string>

class Pilot {

private:

    std::string name = "";
    std::string country = "";

    int numberCar = 0;
    int nrVictories = 0;
    int points = 0;

public:

    Pilot& operator=(Pilot const &pilot);

    Pilot(std::string name, std::string country, int numberCar);

    Pilot();

    Pilot(const Pilot &pilot);

    void finishRace(int position);

    void winTheChampionship();

};


#endif
