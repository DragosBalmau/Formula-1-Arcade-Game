#ifndef TEMEPOO_MCLAREN_H
#define TEMEPOO_MCLAREN_H

#include "Renault.h"

class McLaren : public Renault {

public:

    McLaren();

    McLaren(std::string name, std::string color, Pilot primaryPilot, Pilot secondaryPilot, Engine engine);

    virtual void getPosition();


};

#endif
