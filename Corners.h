//
// Created by kasia on 10.05.19.
//

#ifndef PROJEKT_SPIKES_H
#define PROJEKT_SPIKES_H

#include <array>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics.hpp>
#include "static_blocks.h"

class Corners{
    sf::Texture texture;
    std::array<sf::Sprite*, 4> corners;


public:
    Corners( int x, int y, char type); //spikes
    void draw(sf::RenderWindow&);
};


#endif //PROJEKT_SPIKES_H
