//
// Created by kasia on 27.05.19.
//

#ifndef PROJEKT_KEYS_H
#define PROJEKT_KEYS_H


#include "Sprite.h"
#include "Player.h"

class Keys : public Sprites {

public:
    Keys(int, int);
    bool Colision(Player * player);
};


#endif //PROJEKT_KEYS_H
