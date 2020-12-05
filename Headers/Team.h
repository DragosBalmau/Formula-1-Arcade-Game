#ifndef TEMEPOO_TEAM_H
#define TEMEPOO_TEAM_H

#include <string>
#include <vector>
#include "Pilot.h"
#include "F1car.h"

class Team {

private:

    int points;
    int nrVictories;

    //De ce trebuie astea daca tot mostenesc clasa Team?
    friend class ScuderiaFerrari;

    friend class Renault;

    friend class RedBullRacing;

protected:
    F1car car;
    Pilot secondaryPilot;
    Pilot primaryPilot;
    std::string color;
    std::string name;
public:

    Team(const std::string &name, const std::string &color, const Pilot &primaryPilot, const Pilot &secondaryPilot,
         Engine engine);

    Team();


};


#endif
