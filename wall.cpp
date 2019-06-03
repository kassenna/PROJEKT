
#include <SFML/Graphics/Texture.hpp>
#include "wall.h"
Wall::Wall(char types, int x, int y) :  StaticBlocks() {
        texture.loadFromFile("grafiki/Blok1.png");
        type= types;
        sprite.setTexture(texture);
        sprite.setPosition(x*64, y*64);
    }
Wall::Wall() :  StaticBlocks(){};


