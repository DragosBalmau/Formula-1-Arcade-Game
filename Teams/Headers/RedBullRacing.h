#ifndef TEMEPOO_REDBULLRACING_H
#define TEMEPOO_REDBULLRACING_H

#include "../../Headers/Team.h"

class RedBullRacing : public Team {

public:

    RedBullRacing();

    RedBullRacing(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};

#endif
