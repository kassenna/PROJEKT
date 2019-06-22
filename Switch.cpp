//
// Created by kasia on 01.06.19.
//

#include <iostream>
#include "Switch.h"

Switch::Switch(int x, int y,  const char * _text, const sf::Color &color, int size) :
x(x), y(y),  color(color), size(size) {
 font.loadFromFile("font.TTF");
    text.setString(_text);
    text.setPosition(x, y);
    text.setColor(color);
    text.setCharacterSize(size);
    text.setFont(font);

}

Switch::Switch(int x, int y,  int nr, const sf::Color &color, int size) :
        x(x), y(y),  color(color), size(size) {
    font.loadFromFile("font2.ttf");
    text.setString(std::to_string(nr));
    text.setPosition(x, y);
    text.setColor(color);
    text.setCharacterSize(size);
    text.setFont(font);

}

void Switch::draw(sf::RenderWindow &window) {

    window.draw(text);

}

void Switch::setText(const std::string &text) {
   // std::cout << text << " ";
    Switch::text = sf::Text(text, font);
    Switch::text.setPosition(x, y);
    Switch::text.setCharacterSize(size);
}


