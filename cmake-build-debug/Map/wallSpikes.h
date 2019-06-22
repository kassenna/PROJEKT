//
// Created by kasia on 10.05.19.
//

#ifndef PROJEKT_WALLSPIKES_H
#define PROJEKT_WALLSPIKES_H


#include "wall.h"
//#include "map.h"
#include "Corners.h"
class WallSpikes : public Wall {

protected:
    Corners* spikes;
    public:
    WallSpikes(unsigned char types, int x, int y);
    void Reaction(Player * player);
    void draw(sf::RenderWindow & window);

public:
    virtual ~WallSpikes();
};


#endif //PROJEKT_WALLSPIKES_H
