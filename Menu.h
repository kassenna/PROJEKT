//
// Created by kasia on 25.05.19.
//

#ifndef PROJEKT_MENU_H
#define PROJEKT_MENU_H

#include <iostream>
#include "map.h"
#include "Switch.h"
#include "Load.h"
#include <deque>
#include <list>

class Menu : public Load
{


      sf::RenderWindow window;
std::list<Switch*> menu;

public:
    Menu();
void Choise(sf::Keyboard::Key&);
void AddSwitch(int x, int y,  const char * _text, const sf::Color &color, int size);
void AddSwitch(int x, int y,  int nr, const sf::Color &color, int size);
void draw();


};

#endif //PROJEKT_MENU_H
