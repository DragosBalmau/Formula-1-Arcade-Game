#ifndef TEMEPOO_ENGINE_H
#define TEMEPOO_ENGINE_H

class Engine {

private:
    int nrHp;
    int nrCylinders;
    std::string engineCompany;

public:

    void startEngine();
    void stopEngine();
    Engine(int nrHp, int nrCylinders, std::string engineCompany);
    ~Engine();


};


#endif
