#ifndef TEMEPOO_RENAULT_H
#define TEMEPOO_RENAULT_H

#include "../../Headers/Team.h"

class Renault : public Team {

public:

    Renault();

    Renault(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};


#endif
