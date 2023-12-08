#include "Hole.h"

Hole::Hole() : x(600), y(400) {}

Hole::~Hole() {}

void Hole::render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderDrawPoint(renderer, static_cast<int>(x), static_cast<int>(y));
}