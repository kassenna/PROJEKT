//
// Created by kasia on 15.06.19.
//

#ifndef PROJEKT_GRAPHIC_H
#define PROJEKT_GRAPHIC_H
#include <map>
#include <SFML/Graphics/Texture.hpp>
#include "string"
#include <memory>
#include <cstring>

class Graphic   {
private:
    std::map<std::string, sf::Texture> graphic;
    Graphic();
    sf::Texture t;
public:
    Graphic(const Graphic&)=delete;
    sf::Texture& load(const std::string &);
    static Graphic& getInstance()
    {
        static Graphic grafic;
        return grafic;
    }


    };

#endif