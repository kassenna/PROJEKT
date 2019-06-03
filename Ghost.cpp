//
// Created by kasia on 06.05.19.
//

#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Ghost.h"

void Ghost::draw(sf::RenderWindow &window) {
 if(change==true)
     window.draw(sprite);
 else
     window.draw(HideGhost);
}


Ghost::Ghost(int x, int y) : Sprites(x, y, 0, 0, 1000, 1000){
    texture.loadFromFile("grafiki/ghost.png");
    sprite.setTexture(texture);
    sprite.setPosition(64*x+16, 64*y+16);
    hideGhost.loadFromFile("grafiki/hideghost.png");
    HideGhost.setTexture(hideGhost);
    HideGhost.setPosition(64*x+16,64*y+16);

}

void Ghost::move(bool) {
    current_time--;
    if (current_time <= 0) {
        current_time = time;
        if (change == true)
            change = false;
        else change = true;
    }
 }
bool Ghost::Colision(sf::Sprite s) {
    if(change == false)
        return false;
    if(sprite.getGlobalBounds().intersects(s.getGlobalBounds()) )
        return true;

}

