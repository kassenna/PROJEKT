//
// Created by kasia on 27.05.19.
//

#include <iostream>
#include "keys.h"

Keys::Keys(int x, int y) : Sprites(x, y){
texture.loadFromFile("grafiki/Keys.png");
sprite.setTexture(texture);
sprite.setPosition(64*x, 64*y);

}

bool Keys::Colision(sf::Sprite s) {
    if(sprite.getGlobalBounds().intersects(s.getGlobalBounds())) {

        return true;
    }   return false;

}
