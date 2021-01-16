#ifndef TEMEPOO_GAME_H
#define TEMEPOO_GAME_H
#include "Fereastra.h"
#include "Grafica/Sprite.h"


class Game : public Fereastra, public Sprite {

private:
    Fereastra fereastra;

public:
    Game();

    int init();

    [[noreturn]] void start();

    void finish(int nr);
};


#endif
