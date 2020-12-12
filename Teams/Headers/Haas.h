#ifndef TEMEPOO_HAAS_H
#define TEMEPOO_HAAS_H

#include "ScuderiaFerrari.h"

class Haas : public ScuderiaFerrari {

public:

    Haas();

    Haas(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();

};

#endif
