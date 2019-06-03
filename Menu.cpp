//
// Created by kasia on 25.05.19.
//
#include <string>
#include "Menu.h"
#include "Play.h"

void Menu::AddSwitch(int x, int y, const char *_text, const sf::Color &color, int size) {
Switch* s= new Switch(x, y, _text, color, size);
menu.emplace_back(s);

}
void Menu::AddSwitch(int x, int y, int nr, const sf::Color &color, int size) {

    Switch* s= new Switch(x, y, nr, color, size);
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

Menu::Menu() :Load("Map_ff") {
CreateMap();
    AddSwitch(650, 100, 1, sf::Color::White, 50 );
    AddSwitch(650, 15, "START", sf::Color::White,50 );
    AddSwitch(650, 300, "WYJSCIE", sf::Color::White,50 );
    setCurrent();
   // window.setFramerateLimit(60);
    window.create( sf::VideoMode( 1200, 800 ), " " );
    while(window.isOpen()) {
        window.clear(sf::Color(0, 0, 0 ));
        draw();
        window.display();

        sf::Event zdarzenie;

        while (window.pollEvent(zdarzenie)) {
            if (zdarzenie.type == sf::Event::Closed)
                window.close();
          else  if (zdarzenie.type == sf::Event::KeyPressed) {
                if( zdarzenie.key.code == sf::Keyboard::Escape)
                    window.close();
                else Choise(zdarzenie.key.code);


                }
            }
        }

    }

void Menu::Choise(sf::Keyboard::Key & key) {

/*
if(key==sf::Keyboard::Up && current!=menu.begin()) {
    (*current)->setColor(sf::Color::White);
    advance(current, 1);
    (*current)->setColor(sf::Color::Magenta);

} else if(key==sf::Keyboard::Down && current!=it)
{
    (*current)->setColor(sf::Color::White);
    advance(current, -1);
    (*current)->setColor(sf::Color::Magenta);

} else if(key==sf::Keyboard::Return)
    enter( std::distance(menu.begin(), current));
*/
if(key==sf::Keyboard::Return) {
    Play p(window, *current);
    p.play();
}
}

