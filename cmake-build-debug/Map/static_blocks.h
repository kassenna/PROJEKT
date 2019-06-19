//
// Created by kasia on 24.04.19.
//

#ifndef PROJEKT_STATIC_BLOCKS_H
#define PROJEKT_STATIC_BLOCKS_H
#include <cstring>
#include <SFML/Graphics/Sprite.hpp>

#include "../../Player.h"
//#include "../../Graphic.h"
class StaticBlocks
{
protected:
    char type;
    int x, y;
    sf::Texture texture;
    sf::Sprite sprite;

public:
    int getX() const;
    int getY() const;
    StaticBlocks(int, int);
    virtual void draw(sf::RenderWindow &);
    char getType() const;
    virtual void Reaction(Player*)=0;



};
#endif //PROJEKT_STATIC_BLOCKS_H
