// Created by kasia on 05.05.19.
//

#ifndef PROJEKT_SPRITE_H
#define PROJEKT_SPRITE_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class Sprites  {

protected:
public:
    const sf::Sprite &getSprite() const;

protected:
    sf::Sprite sprite;
    sf::Texture texture;
    int time = 8;
    int current_time = 8;
    int xp=1, yp=1;
    int dx=0, dy=0;
public:
    Sprites(int x, int y);
    Sprites(int x, int y, int dx, int dy);
    Sprites(int x, int y, int dx, int dy, int t, int ctime);

    int getXp() const;
    void setXp(int xp);
    int getYp() const;
    void setYp(int yp);
    int getDx() const;
    void setDx(int dx);
    int getDy() const;

    void setDy(int dy);

    virtual bool Colision(sf::Sprite);
    virtual void move(bool moving);
    virtual void draw(sf::RenderWindow & window);

};

#endif //PROJEKT_SPRITE_H
