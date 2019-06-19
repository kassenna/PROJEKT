// Created by kasia on 05.05.19.
//

#ifndef PROJEKT_SPRITE_H
#define PROJEKT_SPRITE_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <memory>
class Sprites  {

protected:
    sf::Sprite sprite;
    sf::Texture texture;

    int time = 8, current_time = 8;

    int xp=1, yp=1;
    int dx=0, dy=0;
public:

    Sprites(int x, int y);
    Sprites(int x, int y, int dx, int dy);
    Sprites(int x, int y, int dx, int dy, int t, int ctime);


    int getDx() const;
    int getDy() const;
    int getXp() const;
    int getYp() const;
    const sf::Sprite &getSprite() const;

    void setDx(int dx);
    void setDy(int dy);
    void setXp(int xp);
    void setYp(int yp);

    void incX();
    void incY();
    void decX();
    void decY();

    virtual bool Colision(sf::Sprite);
    virtual void move(bool moving);
    virtual void draw(sf::RenderWindow & window);


};

#endif //PROJEKT_SPRITE_H
