#ifndef BALL_H
#define BALL_H

#include "SDL.h"

class Ball {
public:
    Ball();
    ~Ball();

    void update();
    void render(SDL_Renderer* renderer);

private:
    float x, y; // Posição da bola
    float velocityX, velocityY; // Velocidade da bola
};

#endif // BALL_H