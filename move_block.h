//
// Created by kasia on 13.05.19.
//

#ifndef PROJEKT_MOVE_BLOCK_H
#define PROJEKT_MOVE_BLOCK_H
#include "wall.h"
#include "map.h"

class move_block : public Wall  {
int time = 10;
int time_current =0;
int dx = 0;
int dy = 0;
int xp =0, yp=0, xk=0, yk=0;
char preveiew;

public:
    move_block(char types, int x, int y);
    void move();
    bool check(Map &);
};


#endif //PROJEKT_MOVE_BLOCK_H
