#include <iostream>
#include "../Headers/F1car.h"

    void F1car::moveForward() {

        std::cout<<"The car is moving forward!"<<std::endl;
    }

    void F1car::moveBackward() {

        std::cout<<"The car is moving backward!"<<std::endl;
    }

    void F1car::steerLeft() {
        std::cout<<"The car is steering left!"<<std::endl;
    }

    void F1car::steerRight() {
        std::cout<<"The car is steering right!"<<std::endl;
    }


    void F1car::setEngine(const Engine &engine) {
        F1car::engine = engine;
    }

    void F1car::setColor(const std::string &color) {
        F1car::color = color;
    }

    F1car::F1car(){}


