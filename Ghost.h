//
// Created by kasia on 06.05.19.
//

#ifndef PROJEKT_GHOST_H
#define PROJEKT_GHOST_H


#include "Sprite.h"

class Ghost : public Sprites {
protected:
    sf::Texture hideGhost;
    sf::Sprite HideGhost;
    bool change = true;
public:
    Ghost(int , int);
    virtual void draw(sf::RenderWindow & window);
    bool Colision(sf::Sprite s);
    virtual void move(bool);
};


#endif //PROJEKT_GHOST_H
