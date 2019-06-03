//
// Created by kasia on 01.06.19.
//

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
    font.loadFromFile("font.TTF");
    text.setString(std::to_string(nr));
    text.setPosition(x, y);
    text.setColor(color);
    text.setCharacterSize(size);
    text.setFont(font);

}

void Switch::draw(sf::RenderWindow &window) {

    window.draw(text);

}

void Switch::setText(const sf::Text &text) {
    Switch::text = text;
}

const sf::Text &Switch::getText() const {
    return text;
}

void Switch::setColor(const sf::Color &color) {
    Switch::color = color;
    text.setColor(color);
}
