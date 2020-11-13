#ifndef TEMEPOO_ENGINE_H
#define TEMEPOO_ENGINE_H

class Engine {

private:
    int nrHp = 0;
    std::string engineCompany = "";

public:

    void startEngine();
    void stopEngine();
    Engine(int nrHp, std::string engineCompany);
    Engine();


};

#endif
