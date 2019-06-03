//
// Created by kasia on 24.04.19.
//

#ifndef PROJEKT_STATIC_BLOCKS_H
#define PROJEKT_STATIC_BLOCKS_H
#include <cstring>
#include <SFML/Graphics/Sprite.hpp>

#include <SFML/Graphics.hpp>

class StaticBlocks
{
protected:
    sf::Texture texture;
    char type;
    sf::Sprite sprite;
public:
    StaticBlocks();
    virtual void draw(sf::RenderWindow &);
    char getType() const;


};
#endif //PROJEKT_STATIC_BLOCKS_H
