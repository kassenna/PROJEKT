//
// Created by kasia on 26.05.19.
//

#include "Blocks.h"
Blocks::Blocks(int nr, int x, int y) : StaticBlocks() {
    texture.loadFromFile("grafiki/blocks.png");
    sprite.setTexture(texture);
    sprite.setPosition(64*x, 64*y);
    sprite.setRotation(90*nr);

}