#ifndef TEMEPOO_TEAM_H
#define TEMEPOO_TEAM_H
#include "Pilot.h"
#include "F1car.h"

class Team {

protected:

    std::string name = "";
    std::string color = "";
    Pilot primaryPilot;
    Pilot secondaryPilot;
    F1car car;

private:
    int nrVictories = 0;
    int points = 0;

public:

    Team(const std::string &name, const std::string &color, const Pilot &primaryPilot, const Pilot &secondaryPilot,
         Engine engine);

    virtual void getPosition();

    Team();

    virtual ~Team();

    int getPoints() const;

    void setPoints(int points);

    int getNrVictories() const;

    void setNrVictories(int nrVictories);

    Team(const Team &team2);

};
#endif
