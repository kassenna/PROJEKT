//
// Created by kasia on 25.05.19.
//
#include <string>
#include "Menu.h"
#include "Play.h"
#include "EXception.h"
#include <type_traits>
void Menu::AddSwitch(int x, int y, const char *_text, const sf::Color &color, int size) {
Switch* s= new Switch(x, y, _text, color, size);
menu.emplace_back(s);
}

void Menu::AddSwitch(int x, int y, int nr, const sf::Color &color, int size) {
    Switch* s= new Switch(x, y, nr, color, size);
    nbr_map = s;
    menu.emplace_back(s);
}

void Menu::draw() {
    std::list<Switch*>::iterator it;
    it = menu.begin();
    while(it != menu.end())
    {
        (*it)->draw(window);
        it = next(it,1);
    }
}

Menu::Menu() :Load("Mapy") {
CreateMap();
    AddSwitch(650, 100, 0,         sf::Color::White, 60 );
    AddSwitch(650, 15,  "START",   sf::Color::White, 60 );
    AddSwitch(650, 300, "WYJSCIE", sf::Color::White, 60 );

    window.create( sf::VideoMode( 1600, 1000 ), " " );
    while(window.isOpen()) {
        window.clear(sf::Color(0, 0, 0 ));
        draw();
        window.display();

        sf::Event event{};

        while (window.pollEvent(event)) {
            if (!(event.type == sf::Event::Closed)) {
                if (event.type == sf::Event::KeyPressed) {
                    if (event.key.code == sf::Keyboard::Escape)
                        window.close();
                    else Choise(event.key.code);
                }
            } else window.close();
        }
    }

}


void Menu::Choise(sf::Keyboard::Key & key) {

    if(key==sf::Keyboard::Right && i<_max-1){
        current = std::next(current, 1);
        i++;
        nbr_map->setText((std::to_string(i)));
    }
   else if(key==sf::Keyboard::Left && i>0) {
           current = std::prev(current, 1);
               i--;
               nbr_map->setText(std::to_string(i));
               current = std::prev(current, 1);
           }
   else if(key==sf::Keyboard::Return){
       Play p(window, *current);
       p.play();
    }
}

Menu::~Menu() {

}

