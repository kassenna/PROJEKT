//
// Created by kasia on 05.05.19.
//

#include <iostream>
#include "Sprite.h"

Sprites::Sprites(int x, int y) : xp(x), yp(y) {
}

int Sprites::getXp() const {
    return xp;
}

void Sprites::setXp(int xp) {
    Sprites::xp = xp;
}

int Sprites::getYp() const {
    return yp;
}

void Sprites::setYp(int yp) {
    Sprites::yp = yp;
}

int Sprites::getDx() const {
    return dx;
}

void Sprites::setDx(int dx) {
    Sprites::dx = dx;
}

int Sprites::getDy() const {
    return dy;
}

void Sprites::setDy(int dy) {
    Sprites::dy = dy;
}


void Sprites::draw(sf::RenderWindow &window) {

    window.draw(sprite);
}

void Sprites::move(bool moving) {}

bool Sprites::Colision(sf::Sprite s) {
if(sprite.getGlobalBounds().intersects(s.getGlobalBounds()))
    return true;
        return false;
}

Sprites::Sprites(int x, int y, int dx, int dy) :dx(dx), dy(dy), xp(x), yp(y){

}

Sprites::Sprites(int x, int y, int dx, int dy, int t, int ctime) : Sprites(x, y, dx, dy){
    current_time = ctime;
   time = t;
}


const sf::Sprite &Sprites::getSprite() const {
    return sprite;
}


