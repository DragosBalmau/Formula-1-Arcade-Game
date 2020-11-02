#ifndef TEMEPOO_TEAM_H
#define TEMEPOO_TEAM_H

#include <string>
#include <vector>

class Team {

private:

    std::string name;
    std::string manager;
    std::string pilotPrimary;
    std::string pilotSecondary;
    std::string color;
    std::vector<std::string> sponsors;
    int points;
    int nrVictories;

};


#endif
