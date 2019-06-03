// Created by kasia on

#include "Void.h"

Void::Void(){};
Void::Void(int x, int y) : StaticBlocks() {
   type = 0x00;
   texture.create(64,64);
   sprite.setTexture(texture);

    sprite.setPosition(x*64, y*64);
}


