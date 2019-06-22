
#include <SFML/Graphics/Texture.hpp>
#include "wall.h"
Wall::Wall(unsigned char types, int x, int y) :  StaticBlocks(types, x, y) {
        texture = Graphic::getInstance().load("Blok1");
     setSprite();
}
Wall::Wall() :  StaticBlocks(x, y){}

void Wall::Reaction(Player *player) {
player->setDx(0);
player->setDy(0);
}

Wall::Wall(int x, int y, unsigned char types) : StaticBlocks(types, x, y){}


