//
// Created by kasia on 24.04.19.
//

#ifndef PROJEKT_WALL_H
#define PROJEKT_WALL_H

#include <SFML/Graphics.hpp>
#include <array>

#include "static_blocks.h"
#include "Corners.h"

class Wall : public  StaticBlocks {
public:
    Wall(char types, int x, int y);
    Wall();
virtual void Reaction(Player * player);

};
#endif //PROJEKT_WALL_H
