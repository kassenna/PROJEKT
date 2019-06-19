//
// Created by kasia on 09.05.19.
//

#include "Way.h"

Way::Way(char _type, int x, int y) : Void(_type ,x, y) {
    corners = new Corners(x, y, _type);
}

void Way::draw(sf::RenderWindow & window) {
    window.draw(sprite);
    corners->draw(window);
}

Way::~Way() {
delete corners;
corners = nullptr;
}

void Way::Reaction(Player * player) {

    if(player->getDy() >0)
    {if(type & 0x08)
        player->setDy(0);
    else
        player->incY();
    }else if(player->getDy() <0) {
        if (type & 0x02)
            player->setDy(0);
        else
            player->decY();
    }else if(player->getDx() >0){
        if(type & 0x04)
        player->setDx(0);
    else
        player->incX();
    }else if(player->getDx() <0) {
        if (type & 0x01)
            player->setDx(0);
        else
            player->decX();
    }
}

