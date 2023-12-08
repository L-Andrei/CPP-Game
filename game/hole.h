#ifndef HOLE_H
#define HOLE_H

#include "SDL.h"

class Hole {
public:
    Hole();
    ~Hole();

    void render(SDL_Renderer* renderer);

private:
    float x, y; // Posição do buraco
};

#endif