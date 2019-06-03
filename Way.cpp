//
// Created by kasia on 09.05.19.
//

#include "Way.h"

Way::Way(char _type, int x, int y) {
    _type = type;

    texture.create(64,64);
    sprite.setTexture(texture);
    sprite.setPosition(x*64, y*64);
    corners = new Corners(x,y, _type);

}

void Way::draw(sf::RenderWindow & window) {
    window.draw(sprite);
    corners->draw(window);

}

