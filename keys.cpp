//
// Created by kasia on 27.05.19.
//

#include <iostream>
#include "keys.h"
#include "Graphic.h"

Keys::Keys(int x, int y) : Sprites(x, y){
texture = Graphic::getInstance().load("Keys");
sprite.setTexture(texture);
sprite.setPosition(64*x, 64*y);

}

bool Keys::Colision(Player * player) {
    if(sprite.getGlobalBounds().intersects(player->getSprite().getGlobalBounds())) {
    player->decKey();
        return true;
    }
    return false;

}
