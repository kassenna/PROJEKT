//
// Created by kasia on 04.05.19.
//

#ifndef PROJEKT_PLAYER_H
#define PROJEKT_PLAYER_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Sprite.h"


class Player : public Sprites {
//sf::Keyboard::Key key;
    int d = 2;
public:
    Player(int xp, int yp);
    Player();
    const sf::Sprite &getSprite() const;
    void draw(sf::RenderWindow & window);
    void changeDir(sf::Keyboard::Key);
    bool Colision(int,int);

};


#endif //PROJEKT_PLAYER_H
