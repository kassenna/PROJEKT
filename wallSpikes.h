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
    WallSpikes(char types, int x, int y);

    void draw(sf::RenderWindow & window);
};


#endif //PROJEKT_WALLSPIKES_H
