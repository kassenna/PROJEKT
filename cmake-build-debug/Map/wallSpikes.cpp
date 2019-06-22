//
// Created by kasia on 10.05.19.
//

#include <iostream>
#include "wallSpikes.h"



void WallSpikes::draw(sf::RenderWindow & window) {
    window.draw(sprite);
    spikes->draw(window);

}

WallSpikes::WallSpikes(unsigned char types, int x, int y) : Wall(types, x, y) {
    spikes = new Corners(x, y, types);

}

void WallSpikes::Reaction(Player *player) {

    if(player->getDy() >0 && type & 0x08)
        player->setLife();
    else if(player->getDy() <0 && type & 0x02)
        player->setLife();
    else if(player->getDx() >0 && type & 0x04)
        player->setLife();
    else if(player->getDx() <0 && type & 0x01)
        player->setLife();

    player->setDx(0);
    player->setDy(0);

}

WallSpikes::~WallSpikes() {
delete spikes;
spikes = nullptr;
}

