#ifndef GAME_H
#define GAME_H

#include "Ball.h"
#include "Hole.h"
#include "SDL.h"

class Game {
public:
    Game();
    ~Game();

    void run();

private:
    void processInput();
    void update();
    void render();

    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    Ball ball;
    Hole hole;
};

#endif