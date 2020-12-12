#ifndef TEMEPOO_F1CAR_H
#define TEMEPOO_F1CAR_H
#include "Engine.h"

class F1car{

private:

    Engine engine;
    std::string color = "";

public:

    F1car();

    void moveForward();
    void moveBackward();
    void steerLeft();
    void steerRight();

    void setEngine(const Engine &engine);

    void setColor(const std::string &color);
};


#endif


