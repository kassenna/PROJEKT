//
// Created by kasia on 26.05.19.
//

#include <iostream>
#include "Lock.h"
#include "../../Graphic.h"

Lock::Lock( unsigned char _type, int x, int y) : StaticBlocks(x,y){
temp = _type;
type = 0x00;
    texture= Graphic::getInstance().load("Lock");
    sprite.setTexture(texture);
    sprite.setPosition(64*x, 64*y);
t = Graphic::getInstance().load("wall");


}


void Lock::draw(sf::RenderWindow &window) {
    window.draw(sprite);
}

void Lock::Reaction(Player *player) {
if(lock == false)
{
 sprite.setTexture(t);
 type = temp;
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


