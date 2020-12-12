#include <stdio.h>
#include <string>
#include "../Headers/Engine.h"


void Engine::startEngine() {
    printf("The engine just started!\n");
}

void Engine::stopEngine() {
    printf("The engine just stopped!\n");
}

Engine::Engine() = default;

Engine::Engine(int nrHp, std::string engineCompany) : nrHp(nrHp), engineCompany(engineCompany) {}

