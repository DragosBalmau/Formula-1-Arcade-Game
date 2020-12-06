#ifndef TEMEPOO_TEAM_H
#define TEMEPOO_TEAM_H

#include <string>
#include <vector>
#include "Pilot.h"
#include "F1car.h"

class Team {

private:

    int nrVictories;
    int points;

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

    virtual void getPosition();

    Team();

    int getPoints() const;

    void setPoints(int points);

    int getNrVictories() const;

    void setNrVictories(int nrVictories);

    Team(const Team &team2);


};


#endif
