#ifndef TEMEPOO_TEAM_H
#define TEMEPOO_TEAM_H

#include <string>
#include <vector>
#include "Pilot.h"
#include "F1car.h"

class Team {

private:

    std::string name;
    std::string color;

    Pilot primaryPilot;
    Pilot secondaryPilot;

    F1car car;

    int points;
    int nrVictories;


    //De ce trebuie astea daca tot mostenesc clasa Team?
    friend class MercedesAMG;

    friend class ScuderiaFerrari;

    friend class Renault;

    friend class RedBullRacing;

public:

    Team(const std::string &name, const std::string &color, const Pilot &primaryPilot, const Pilot &secondaryPilot,
         Engine engine);

    Team();


};


#endif
