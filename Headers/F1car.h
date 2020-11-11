#ifndef TEMEPOO_F1CAR_H
#define TEMEPOO_F1CAR_H
#include <string>
#include "Engine.h"


class F1car{

private:

    Engine engine;
    std::string color;

public:

    const Engine &getEngine() const;

    void setEngine(const Engine &engine);

    const std::string &getColor() const;

    void setColor(const std::string &color);

    void moveForward();
    void moveBackward();
    void steerLeft();
    void steerRight();

    F1car();
};


#endif
