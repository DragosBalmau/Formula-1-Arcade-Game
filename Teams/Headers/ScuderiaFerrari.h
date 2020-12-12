#ifndef TEMEPOO_SCUDERIAFERRARI_H
#define TEMEPOO_SCUDERIAFERRARI_H

#include "../../Headers/Team.h"

class ScuderiaFerrari : public Team {

public:

    ScuderiaFerrari();

    ScuderiaFerrari(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};

#endif
