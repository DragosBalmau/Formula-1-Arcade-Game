#ifndef TEMEPOO_MERCEDESAMG_H
#define TEMEPOO_MERCEDESAMG_H

#include "../../Headers/Team.h"

class MercedesAMG : public Team {

public:

    MercedesAMG();

    MercedesAMG(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();

};

#endif
