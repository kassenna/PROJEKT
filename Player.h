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

    int d = 2;
    bool life = true;
    bool win=false;
    int keys=0;
   // int frame = 32;
    //int frame_static = 32;

public:
    //int getTime() const;

    bool Time();
    void DecTime();
    void SetTime();
    void SetTime(int);
    Player(int xp, int yp);
    Player();
    const sf::Sprite &getSprite() const;
    void draw(sf::RenderWindow & window);
    void changeDir(sf::Keyboard::Key);
    void setSpite(int y, int x);
    bool isLife() const;
    void setLife();
    bool isWin();
    void setWin();
    void setKey(int);
    void decKey();

};


#endif //PROJEKT_PLAYER_H
