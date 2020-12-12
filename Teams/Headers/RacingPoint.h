#ifndef TEMEPOO_RACINGPOINT_H
#define TEMEPOO_RACINGPOINT_H

#include "MercedesAMG.h"

class RacingPoint : public MercedesAMG {

public:

    RacingPoint();

    RacingPoint(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};

#endif
