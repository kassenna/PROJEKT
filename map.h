
#ifndef PROJEKT_MAP_H
#define PROJEKT_MAP_H
#include <vector>
#include "static_blocks.h"
#include <fstream>
#include <iostream>
#include <SFML/Window.hpp>
#include "Player.h"
#include "Sprite.h"
#include "keys.h"
#include <list>
#include "Load.h"
#include "Maps.h"
class Map {
protected:
    Maps * map;
    std::vector<std::vector<StaticBlocks*>> _map;
    int frame = 32;
    int frame_static = 32;
    Player* player1;
    std::list<Sprites*> sprites;
    std::vector<std::unique_ptr<Keys>> keys;
    sf::RenderWindow* window;
    sf::Keyboard::Key key;
    sf::Vector2i meta;
public:
    Map(Maps * maps);
    void setMap();
   };
#endif //PROJEKT_MAP_H
