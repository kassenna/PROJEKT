//
// Created by kasia on 08.05.19.
//
#include <list>
#ifndef PROJEKT_GRAPHICS_H
#define PROJEKT_GRAPHICS_H
#include <SFML/Graphics/Texture.hpp>

#define  VOID 0x00;
#define  START 0x0F;
#define RIGHT 0x01;
#define DOWN 0x02;
#define LEFT 0x04;

#define UP 0x08;
#define META 0x20;
#define PORTAL 0x40;

#define BLOK 0x80;
#define LOCK 0xC0;


struct Textura
{
    int i;
    char* plik;
};

class Graphics {
public:
    static sf::Texture block;
    static sf::Texture portal;
    static sf::Texture _void;
    static sf::Texture sprite;
    static sf::Texture ghost;
public:
  Graphics() {
block.loadFromFile("Block1.png");
_void.loadFromFile("void.png");

  }


};


#endif //PROJEKT_GRAPHICS_H
