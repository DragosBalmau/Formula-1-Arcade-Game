#include <stdio.h>
#include <string>
#include "Engine.h"


    void startEngine() {
        printf("The engine just started!");
    }

    void stopEngine() {
        printf("The engine just stopped!");
    }

    Engine::Engine(int nrHp, int nrCylinders, std::string engineCompany) {

        this->nrHp = nrHp;
        this->nrCylinders = nrCylinders;
        this->engineCompany = engineCompany;

    }

    Engine::~Engine() {

        printf("Engine distroid");

    }
