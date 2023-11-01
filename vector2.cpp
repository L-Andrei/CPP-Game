#include "vector2.h"
#include <iostream>


Vector2::Vector2(double x1, double y1){
    x = {x1};
    y = {y1};
}

Vector2::Vector2(){
    x = y = 0;
}

Vector2 & Vector2::operator+(Vector2 &v){
    Vector2::x = x + v.x;
    Vector2::y = y + v.y;
    return *this;
}

Vector2 & Vector2::operator-(Vector2 &v){
    Vector2::x = x - v.x;
    Vector2::y = y - v.y;
    return *this;
}

double & Vector2::operator*(Vector2 &v){
    Vector2::x;
    Vector2::y;
    double r = x * v.x + x * v.y;
    return r;
}

Vector2 & Vector2::operator=(Vector2 &v){
    Vector2::x = v.x;
    Vector2::y = v.y;
    return *this;
}

Vector2 Vector2::produtoEscalar(const Vector2 &v){
    
}
