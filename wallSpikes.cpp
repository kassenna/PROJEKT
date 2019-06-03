//
// Created by kasia on 10.05.19.
//

#include <iostream>
#include "wallSpikes.h"



void WallSpikes::draw(sf::RenderWindow & window) {
    window.draw(sprite);
    spikes->draw(window);

}

WallSpikes::WallSpikes(char types, int x, int y) : Wall(types, x, y) {
    spikes = new Corners(x, y, types);


}

