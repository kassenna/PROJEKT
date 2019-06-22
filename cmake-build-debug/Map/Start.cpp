
#include "Start.h"
#include "../../Graphic.h"


Start::Start(int x, int y, unsigned char _type) : Void(_type, x,y) {
    type = _type;
    texture = Graphic::getInstance().load("start");
    setSprite();
}
