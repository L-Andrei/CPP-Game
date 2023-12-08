#include "Ball.h"

Ball::Ball() : x(400), y(300), velocityX(0), velocityY(0) {}

Ball::~Ball() {}

void Ball::update() {
    // Lógica de atualização da bola
}

void Ball::render(SDL_Renderer* renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawPoint(renderer, static_cast<int>(x), static_cast<int>(y));
}

