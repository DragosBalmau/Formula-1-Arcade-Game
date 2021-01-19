#include <utility>
#include <vector>
#include "Game.h"
#include "IO/MOUSE.h"
#include <windows.h>


void Game::finish(std::string pathImage) {

    Sprite won = Sprite("Resources/WON.png", 370, 100);
    won.setScale(1);
    Sprite masinaCastig = Sprite(std::move(pathImage), 795, 460);
    masinaCastig.setScale(0.2f);
    masinaCastig.setRot(-90);

    won.update();
    masinaCastig.update();

    won.render();
    masinaCastig.render();

    Fereastra::endRender();
    Sleep(5000);
    exit();

}

int Game::start() {

    Sprite fundalCursa = Sprite("Resources/pista.png", 0, 0);
    fundalCursa.setScale(1, 1);

    std::vector<Sprite> masini;
    std::vector<Sprite> semafor;

    for (int i = 1; i <= 4; ++i) {
        semafor.emplace_back("Resources/sem" + std::to_string(i) + ".png", 700, 450);
        semafor.back().setScale(1);
    }

    for (int i = 1; i <= 10; ++i) {

        masini.emplace_back("Resources/Layer " + std::to_string(i) + ".png", 10, 1050 - (87 * i));
        masini.back().setScale(0.2f);
        masini.back().setRot(-90);

    }

    bool start = false;
    int sem = 0;

    while (true) {

        Fereastra::update();

        if (!start) {
            ++sem;
            if (sem == 400)
                start = true;
        }

        for (auto &it : masini) {
            it.update();
            if (it.getXPos() >= 1646) {
                finish(it.getPath());
                return 0;
            }


        }
        Fereastra::update();
        Fereastra::beginRender();

        fundalCursa.render();

        for (auto &it : masini) {
            it.render();
        }

        if (start) {

            for (auto &it : masini)
                it.render();

            for (auto &it : masini)
                it.setPos(it.getXPos() + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 7)),
                          it.getYPos());

        }

        if (!start)
            semafor[sem / 100].render();

        Fereastra::endRender();

    }


}

int Game::init() {


    fereastra.initialize("Joc F1");

    Sprite fundal = Sprite("Resources/wallpaper.jpg", 0, 0);
    fundal.setScale(1.0f, 1.0f);

    Sprite buttonPlay = Sprite("Resources/PLAY.png", 100, 400);
    buttonPlay.setScale(1.2f, 0.5);

    Sprite buttonExit = Sprite("Resources/QUIT.png", 100, 300);
    buttonExit.setScale(1.2f, 0.5);

    while (true) {
        Fereastra::update();
        if ((MOUSE::getMouseX() >= 100 && MOUSE::getMouseX() <= 480) &&
            (MOUSE::getMouseY() <= 1080 - 420 && MOUSE::getMouseY() >= 1080 - 500)) {
            buttonPlay.setPos(95, 390);
            buttonPlay.setScale(1.25f, .55f);
            if (MOUSE::buttonDown(GLFW_MOUSE_BUTTON_LEFT)) {
                start();
                return 0;
            }

        } else {
            buttonPlay.setScale(1.2f, .5f);
            buttonPlay.setPos(100, 400);
        }

        if ((MOUSE::getMouseX() >= 100 && MOUSE::getMouseX() <= 480) &&
            (MOUSE::getMouseY() <= 1080 - 320 && MOUSE::getMouseY() >= 1080 - 400)) {
            buttonExit.setPos(95, 290);
            buttonExit.setScale(1.25f, .55f);
            if (MOUSE::buttonDown(GLFW_MOUSE_BUTTON_LEFT)) {
                return 0;
            }
        } else {
            buttonExit.setScale(1.2f, .5f);
            buttonExit.setPos(100, 300);
        }

        buttonPlay.update();
        buttonExit.update();
        Fereastra::beginRender();

        fundal.render();
        buttonPlay.render();
        buttonExit.render();

        Fereastra::endRender();

    }

}

Game::Game() : fereastra() {}
