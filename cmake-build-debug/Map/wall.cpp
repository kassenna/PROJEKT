
#include <SFML/Graphics/Texture.hpp>
#include "wall.h"
Wall::Wall(char types, int x, int y) :  StaticBlocks(x, y) {
        texture = Graphic::getInstance().load("Blok1");
        type= types;
        sprite.setTexture(texture);
        sprite.setPosition(x*64, y*64);
    }
Wall::Wall() :  StaticBlocks(x, y){}

void Wall::Reaction(Player *player) {
player->setDx(0);
player->setDy(0);
}


