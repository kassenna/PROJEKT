//
// Created by kasia on 13.05.19.
//

#include "move_block.h"

move_block::move_block(char types, int x, int y) : Wall(types, x, y) {
if(types & 0xB0)
    dx = 64;
else if(types & 0x90)
    dy = 64;
}

void move_block::move() {
    if (time_current == 0)
    {
        time_current == time;
        sprite.move(dx, dy);
    }

}

bool move_block::check(Map & map) {}
//1011 xxxx
//1010 0000