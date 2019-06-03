//
// Created by kasia on 20.05.19.
//

#include "Meta.h"

Meta::Meta(char _type, int x, int y) : StaticBlocks(){
type = _type;
texture.loadFromFile("grafiki/meta.png");
sprite.setTexture(texture);
sprite.setPosition(64*x, 64*y);

}
