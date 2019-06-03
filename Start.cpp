
#include "Start.h"


Start::Start(int x, int y, char _type) : Void() {
    type = 0x00;
    texture.loadFromFile("grafiki/start.png");
    sprite.setTexture(texture);
    sprite.setPosition(x*64, y*64);
}
