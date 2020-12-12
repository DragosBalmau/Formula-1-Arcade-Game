#ifndef TEMEPOO_WILLIAMS_H
#define TEMEPOO_WILLIAMS_H

#include "MercedesAMG.h"

class Williams : public MercedesAMG {

public:

    Williams();

    Williams(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};

#endif
