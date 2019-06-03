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
    bool check_player();
    bool checkPool(int, int, int, int, char);
    bool moveSprite(int, int);

public:
    Play(sf::RenderWindow& window1, Maps * maps);
    bool play();
    bool win();


};


#endif //PROJEKT_PLAY_H
