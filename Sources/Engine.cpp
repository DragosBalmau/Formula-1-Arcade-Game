#include <stdio.h>
#include <string>
#include "../Headers/Engine.h"


    void startEngine() {
        printf("The engine just started!");
    }

    void stopEngine() {
        printf("The engine just stopped!");
    }

    Engine::Engine(int nrHp, std::string engineCompany) {

        this->nrHp = nrHp;
        this->engineCompany = engineCompany;

    }

    Engine::~Engine() {

        printf("Engine destroyed");

    }


