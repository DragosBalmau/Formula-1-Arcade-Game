#ifndef TEMEPOO_FEREASTRA_H
#define TEMEPOO_FEREASTRA_H

#include "GLFW/glfw3.h"
#include "SOIL/src/SOIL.h"

class Fereastra {

public:

    Fereastra();

    ~Fereastra();

    bool initialize(const char *Titlu);

    static void update();

    static void beginRender();

    static void endRender();

    static GLFWwindow *fereastra;

    int exit();

protected:


private:



};


#endif