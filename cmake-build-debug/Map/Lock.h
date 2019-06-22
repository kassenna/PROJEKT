//
// Created by kasia on 26.05.19.
//

#ifndef PROJEKT_LOCK_H
#define PROJEKT_LOCK_H


#include "static_blocks.h"
#include "../../Sprite.h"

class Lock : public StaticBlocks {
//sf::Texture t;
bool lock = false;
public:
        Lock(unsigned char, int x, int y);
     void draw(sf::RenderWindow & window);

    void Reaction(Player *player);

};




#endif //PROJEKT_LOCK_H
