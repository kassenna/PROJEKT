// Created by kasia on

#include <iostream>
#include "Void.h"
#include "../../Graphic.h"


Void::Void(int x, int y, unsigned char type) : StaticBlocks(type, x, y) {}

Void::Void(unsigned char _type, int x, int y) : StaticBlocks(x, y) {
    type = _type;
    texture = Graphic::getInstance().load("Void.png");
    setSprite();
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


