#include <cstring>
#include "static_blocks.h"
#include <iostream>
#include <SFML/Graphics/Texture.hpp>

#include <SFML/Graphics.hpp>

StaticBlocks::StaticBlocks(){
};

void StaticBlocks::draw(sf::RenderWindow & window)
{
    window.draw(sprite);
}
char StaticBlocks::getType() const
{
       return type;
}



