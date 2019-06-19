
#include "Start.h"
#include "../../Graphic.h"


Start::Start(int x, int y, char _type) : Void(x,y) {
    type = type;
    texture = Graphic::getInstance().load("start");
    sprite.setTexture(texture);
    sprite.setPosition(x*64, y*64);
}
/*
void Start::Reaction(Player *player) {

        if(player->getDx()>0)
            player->incX();
        else if(player->getDx()<0)
            player->decX();
        else if(player->getDy()>0)
            player->incY();
        else if(player->getDy()<0)
            player->decY();

}

*/
