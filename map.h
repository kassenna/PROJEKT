
#ifndef PROJEKT_MAP_H
#define PROJEKT_MAP_H
#include <vector>
#include "cmake-build-debug/Map/static_blocks.h"
#include <fstream>
#include <iostream>
#include <SFML/Window.hpp>
#include "Player.h"
#include "Sprite.h"
#include "keys.h"
#include <list>
#include "Load.h"
#include "Maps.h"
#include "cmake-build-debug/Map/Portal.h"

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
    std::list<Portal*> portals;
public:
    Map(Maps * maps);
    void setMap();
    void setPortals();

    virtual ~Map();
};
#endif //PROJEKT_MAP_H
