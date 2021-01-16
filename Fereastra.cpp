#include "Fereastra.h"
#include "IO/MOUSE.h"
#include <iostream>

GLFWwindow *Fereastra::fereastra = nullptr;

Fereastra::Fereastra() {
}

void Fereastra::exit(){

    glfwDestroyWindow(fereastra);
    return;

}

bool Fereastra::initialize(const char *titlu) {

    try {
        if(!glfwInit())
            throw "glfwInit esuat";
    } catch (const char &ex){
        std::cerr << "[GLFW ERROR]: " << ex << std::endl;
        return false;
    }

    const GLFWvidmode *mode = glfwGetVideoMode(glfwGetPrimaryMonitor());

    try{


        glfwWindowHint(GLFW_RED_BITS, mode->redBits);
        glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
        glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
        glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);

        fereastra = glfwCreateWindow(mode->width, mode->height, titlu, nullptr, nullptr);

        if (fereastra == nullptr) {
            throw "Initializare fereastra esuata";
        }
    } catch (const char &ex){
        std::cerr << "[GLFW ERROR]: " << ex << std::endl;
        return false;
    }

    glfwMakeContextCurrent(fereastra);
    int wid, hgt;
    glfwGetFramebufferSize(fereastra, &wid, &hgt);
    glfwSwapInterval(1);

    glfwSetCursorPosCallback(fereastra, MOUSE::mousePosCallback);
    glfwSetMouseButtonCallback(fereastra, reinterpret_cast<GLFWmousebuttonfun>(MOUSE::mouseButtonCallback));

    int xPos = 0;
    int yPos = 0;
    glfwSetWindowPos(fereastra, xPos, yPos);

    glViewport(0, 0, wid, hgt);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, wid, 0, hgt, -10, 10);
    glDepthRange(-10, 10);
    glMatrixMode(GL_MODELVIEW);

    glEnable(GL_ALPHA_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    return true;

}

Fereastra::~Fereastra() = default;

void Fereastra::update() {
    glfwPollEvents();
}

void Fereastra::beginRender() {

    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Fereastra::endRender() {
    glfwSwapBuffers(fereastra);
}