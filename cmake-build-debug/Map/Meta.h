//
// Created by kasia on 20.05.19.
//

#ifndef PROJEKT_META_H
#define PROJEKT_META_H


#include "static_blocks.h"
#include "Void.h"

class Meta : public Void {

public:
    Meta(unsigned char _type, int x, int y);
    void Reaction(Player *player);
};


#endif //PROJEKT_META_H
