//
// Created by kasia on 09.05.19.
//

#ifndef PROJEKT_WAY_H
#define PROJEKT_WAY_H


#include "Void.h"
#include "Corners.h"

class Way : public Void {
Corners* corners;
public:
    Way(char, int, int);
void draw(sf::RenderWindow&);
    void Reaction(Player * player);
    virtual ~Way();
};


#endif //PROJEKT_WAY_H
