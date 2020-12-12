#ifndef TEMEPOO_ALFAROMEORACING_H
#define TEMEPOO_ALFAROMEORACING_H


#include "ScuderiaFerrari.h"

class AlfaRomeoRacing : public ScuderiaFerrari {


public:

    AlfaRomeoRacing();

    AlfaRomeoRacing(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};


#endif
