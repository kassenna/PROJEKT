//
// Created by kasia on 20.06.19.
//

#ifndef PROJEKT_BALL_H
#define PROJEKT_BALL_H


#include "Sprite.h"

class Ball : public Sprites{

    int x, y;
public:
    Ball(int x, int y);
    void move(bool);
};


#endif //PROJEKT_BALL_H
