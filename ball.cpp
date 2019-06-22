//
// Created by kasia on 20.06.19.
//

#include <iostream>
#include "ball.h"
#include "Graphic.h"

Ball::Ball(int _x, int _y): Sprites(_x, _y, 0, 0,128,1 ) {
    texture = Graphic::getInstance().load("ball");
    sprite.setTexture(texture);
    sprite.setPosition(_x * 64 + 28, _y * 64 + 28);
    x = _x;
    y = _y;

}

void Ball::move(bool m) {
    current_time--;
    if(current_time <= 0 ){
        if (m) {
            xp=x;
            yp=y;
            sprite.setPosition(xp * 64 + 28 + 32*dx, yp * 64 + 28+32*dy);
        } else {
            current_time = time;
            if (dx > 0)
                xp++;
            else if (dx < 0)
                xp--;
            else if (dy > 0)
                yp++;
            else if (dy < 0)
                yp--;

        }

    }

    if(0 == current_time%2)
    sprite.move(dx, dy);

}

