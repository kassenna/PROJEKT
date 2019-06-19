#include <cstring>
#include "static_blocks.h"
#include <iostream>
#include <SFML/Graphics/Texture.hpp>

#include <SFML/Graphics.hpp>

StaticBlocks::StaticBlocks(int x , int y ) : x(x), y(y){
};

void StaticBlocks::draw(sf::RenderWindow & window)
{
    window.draw(sprite);
}
char StaticBlocks::getType() const
{
       return type;
}

int StaticBlocks::getX() const {
    return x;
}

int StaticBlocks::getY() const {
    return y;
}




