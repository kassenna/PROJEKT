//
// Created by kasia on 15.06.19.
//

#include "Graphic.h"
#include "EXception.h"

//std::map<std::string, sf::Texture> Graphic::graphics() {
Graphic::Graphic() {

    sf::Texture _Void;
    _Void.loadFromFile("grafiki/Void.png");
    graphic.insert(std::make_pair("Void", _Void));

    sf::Texture Blok1;
    Blok1.loadFromFile("grafiki/Blok1.png");
    graphic.insert(std::make_pair("Blok1", (Blok1)));

    sf::Texture ghost;
    ghost.loadFromFile("grafiki/ghost.png");
    graphic.insert(std::make_pair("ghost", (ghost)));

    sf::Texture hghost;
    hghost.loadFromFile("grafiki/hideghost.png");
    graphic.insert(std::make_pair("hideghost", (hghost)));

    sf::Texture Keys;
    Keys.loadFromFile("grafiki/Keys.png");
    graphic.insert(std::make_pair("Keys", (Keys)));

    sf::Texture Lock;
    Lock.loadFromFile("grafiki/Lock.png");
    graphic.insert(std::make_pair("Lock", (Lock)));

    sf::Texture  meta;
    meta.loadFromFile("grafiki/meta.png");
    graphic.insert(std::make_pair("meta", (meta)));

    sf::Texture player;
    player.loadFromFile("grafiki/Player.png");
    graphic.insert(std::make_pair("Player",(player)));

    sf::Texture portal;
    portal.loadFromFile("grafiki/portal.png");
    graphic.insert(std::make_pair("portal", portal));

    sf::Texture kolce;
    kolce.loadFromFile("grafiki/spikes2.png");
    graphic.insert(std::make_pair("spikes", kolce));


    sf::Texture start;
    start.loadFromFile("grafiki/start.png");
    graphic.insert(std::make_pair("start", start));

    sf::Texture wall;
    wall.loadFromFile("grafiki/wall.png");
    graphic.insert(std::make_pair("wall", wall));

    sf::Texture way;
    way.loadFromFile("grafiki/way.png");
    graphic.insert(std::make_pair("way", way));

    sf::Texture bloks;
    bloks.loadFromFile("grafiki/bloks2.png");
    graphic.insert(std::make_pair("bloks", bloks));

    sf::Texture ball;
    ball.loadFromFile("grafiki/ball.png");
    graphic.insert(std::make_pair("ball", ball));


    sf::Texture pistol;
    pistol.loadFromFile("grafiki/Pistol.png");
    graphic.insert(std::make_pair("pistol", pistol));

}


sf::Texture &Graphic::load(const std::string &st) {
    try{
        return graphic.at(st);
    }
    catch(std::out_of_range&)
    {
        return t;

    }
}



