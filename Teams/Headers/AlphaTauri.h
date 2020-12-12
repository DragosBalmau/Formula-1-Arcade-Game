#ifndef TEMEPOO_ALPHATAURI_H
#define TEMEPOO_ALPHATAURI_H

#include "RedBullRacing.h"

class AlphaTauri : public RedBullRacing {

public:

    AlphaTauri();

    AlphaTauri(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};


#endif
