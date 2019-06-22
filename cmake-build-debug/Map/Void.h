//
// Created by kasia on 25.04.19.
//

#ifndef PROJEKT_VOID_H
#define PROJEKT_VOID_H

#include "static_blocks.h"
class Void : public  StaticBlocks {

public:

    Void(int x, int y, unsigned char type);
    Void(unsigned char, int , int);
    void Reaction(Player * player);
};
#endif //PROJEKT_VOID_H
