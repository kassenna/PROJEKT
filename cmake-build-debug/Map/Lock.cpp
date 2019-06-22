//
// Created by kasia on 26.05.19.
//

#include <iostream>
#include "Lock.h"
#include "../../Graphic.h"

Lock::Lock( unsigned char _type, int x, int y) : StaticBlocks(_type, x,y){


    texture= Graphic::getInstance().load("Lock");
    setSprite();

}


void Lock::draw(sf::RenderWindow &window) {
    window.draw(sprite);
}

void Lock::Reaction(Player *player) {
if(!lock)
{
 sprite.setTexture(Graphic::getInstance().load("wall"));
    if(player->getDx()>0)
        player->incX();
    else if(player->getDx()<0)
        player->decX();
    else if(player->getDy()>0)
        player->incY();
    else if(player->getDy()<0)
        player->decY();

    lock=true;
}
else{
    player->setDy(0);
    player->setDx(0);
}
}


