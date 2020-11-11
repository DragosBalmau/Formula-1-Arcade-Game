#include <stdio.h>
#include "../Headers/F1car.h"

    void moveForward() {

        printf("The car is moving forward!");
    }

    void moveBackward() {

        printf("The car is moving backward!");
    }

    void steerLeft() {
        printf("The car is steering left!");
    }

    void steerRight() {
        printf("The car is steering right!");
    }

    const Engine &F1car::getEngine() const {
        return engine;
    }

    void F1car::setEngine(const Engine &engine) {
        F1car::engine = engine;
    }

    const std::string &F1car::getColor() const {
        return color;
    }

    void F1car::setColor(const std::string &color) {
        F1car::color = color;
    }

F1car::F1car() {

}