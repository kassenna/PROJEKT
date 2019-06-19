// Created by kasia on

#include <iostream>
#include "Void.h"
#include "../../Graphic.h"


Void::Void(int x, int y) : StaticBlocks(x, y) {
   type = 0x00;
   texture = Graphic::getInstance().load("Void.png");
   sprite.setTexture(texture);

    sprite.setPosition(x*64, y*64);
}

Void::Void(unsigned char _type, int x, int y) : StaticBlocks(x, y) {
    type = _type;
    texture = Graphic::getInstance().load("Void.png");
    sprite.setTexture(texture);

    sprite.setPosition(x*64, y*64);
}

void Void::Reaction(Player *player) {
         if(player->getDx()>0)
           player->incX();
    else if(player->getDx()<0)
        player->decX();
    else if(player->getDy()>0)
        player->incY();
    else if(player->getDy()<0)
        player->decY();




}


