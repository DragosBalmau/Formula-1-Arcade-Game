#ifndef TEMEPOO_GAME_H
#define TEMEPOO_GAME_H
#include "Fereastra.h"
#include "Grafica/Sprite.h"


class Game : public Fereastra, public Sprite {

private:
    Fereastra fereastra;
    static Game * instance;
    Game();
public:

    int init();

    [[noreturn]] void start();

    static Game *getInstance(){
        if (!instance)
            instance = new Game;
        return instance;
    };

    //void finish(int nr);
};


#endif
