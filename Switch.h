//
// Created by kasia on 01.06.19.
//

#ifndef PROJEKT_SWITCH_H
#define PROJEKT_SWITCH_H
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>

class Switch {
private:
    sf::Color color;
    sf::Font font;
    int x, y;
    sf::Text text;
    int size;
public:
    void setColor(const sf::Color &color);
    const sf::Text &getText() const;
    void setText(const sf::Text &text);
    Switch(int x, int y, const char* text, const sf::Color &color, int size);
    Switch(int x, int y, int nr, const sf::Color &color, int size);
    void enter(int nr, sf::RenderWindow &window);
    void draw(sf::RenderWindow & window);


};


#endif //PROJEKT_SWITCH_H
