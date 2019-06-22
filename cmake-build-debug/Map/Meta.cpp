//
// Created by kasia on 20.05.19.
//

#include <iostream>
#include "Meta.h"
#include "../../Graphic.h"

Meta::Meta(unsigned char _type, int x, int y) : Void(x, y, _type
){

texture = Graphic::getInstance().load("meta");
setSprite();

}

void Meta::Reaction(Player* player) {
    player->setWin();
   if(player->isWin()== false) {
       if (player->getDx() > 0)
           player->incX();
       else if (player->getDx() < 0)
           player->decX();
       else if (player->getDy() > 0)
           player->incY();
       else if (player->getDy() < 0)
           player->decY();
   }else {
        player->setDx(0);
        player->setDy(0);
    }
}
