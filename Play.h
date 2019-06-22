//
// Created by kasia on 01.06.19.
//

#ifndef PROJEKT_PLAY_H
#define PROJEKT_PLAY_H


#include "map.h"

class Play : public Map{
protected:

    void draw();
    bool _Sprites();
    void PlayerTurn();
    void check_player();

    bool moveSprite(int, int);
    //bool win = false;
public:
    Play(sf::RenderWindow& window1, Maps * maps);
    bool play();



};


#endif //PROJEKT_PLAY_H
