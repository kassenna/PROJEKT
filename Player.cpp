//
// Created by kasia on 04.05.19.
//

#include <iostream>
#include "Player.h"

Player::Player() : Sprites(1, 1) {
    texture.loadFromFile("grafiki/Player.png");
    sprite.setTexture(texture);
    sprite.setPosition(80, 80);
}

Player::Player(int xp, int yp) : Sprites(xp, yp) {
texture.loadFromFile("grafiki/Player.png");
sprite.setTexture(texture);
sprite.setPosition(64*xp+16, 64*yp+16);
}

void Player::draw(sf::RenderWindow &window) {

       sprite.move(dx, dy);
   window.draw(sprite);

}

void Player::changeDir(sf::Keyboard::Key key) {
    if (dx == 0 && dy == 0) {
        if (key == sf::Keyboard::Up) {
            dy = -d;
            return;
        }
        if (key == sf::Keyboard::Left) {
            dx = -d;
            return;
        }
        if (key == sf::Keyboard::Down) {
            dy = d;
            return;
        }
        if (key == sf::Keyboard::Right) {
            dx = d;
            return;
        }
    }
}


const sf::Sprite &Player::getSprite() const {
    return sprite;
}
