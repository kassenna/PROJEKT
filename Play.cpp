//
// Created by kasia on 01.06.19.
//

#include "Play.h"
#include "keys.h"
#include "EXception.h"

bool Play::play()
{
    window->setFramerateLimit(60);

    window->create( sf::VideoMode( 1600, 800, 32 ), " " );
    setMap();

    while(window->isOpen()) {
        window->clear(sf::Color(43, 50, 90 ));

            check_player();
        if(!player1->isLife())
            return false;
            if (_Sprites())
                return false;
            if (player1->isWin())
                return true;
        draw();

        window->display();

        sf::Event event;

        while (window->pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window->close();
            if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Middle)
                window->close();
            if (event.type == sf::Event::KeyPressed) {
                if( event.key.code == sf::Keyboard::Escape)
                    return false;
                else {
                    key= event.key.code;
                    PlayerTurn();
                }
            }
        }

    }
}

void Play::draw()
{
    for(int i = 0; i<map->getX(); i++)
        for(int j=0; j<map->getY(); j++) {
            _map[i][j]->draw(*window);
        }
    player1->draw(*window);
    std::list<Sprites*>::iterator L = sprites.begin();
    while(L!=sprites.end())
    {
        (*L)->draw(*window);
        std::advance(L,1);
    }
    std::vector<std::unique_ptr<Keys>>::iterator k  = keys.begin();
    while(k!=keys.end())
    {
            (*k)->draw(*window);
        k=std::next(k, 1);

    }
}
void Play::PlayerTurn( ) {
    player1->changeDir(key);
}
void Play::check_player() {
    int dx = player1->getDx();
    int dy = player1->getDy();

    if(dx==0 && dy==0) {
        frame = 1;
        return;
    }
        frame--;
    if(frame==0){
        int x = player1->getXp();
        int y = player1->getYp();
        frame=frame_static;


            if(dy >0)
                _map[y + 1][x]->Reaction(player1);
            else if (dy < 0)
                _map[y - 1][x]->Reaction(player1);
            else if (dx > 0)
                _map[y][x + 1]->Reaction(player1);
            else if (dx < 0)
                _map[y][x - 1]->Reaction(player1);

    }

}

bool Play::_Sprites() {
    std::list<Sprites*>::iterator L = sprites.begin();

    for(int i=0; i< sprites.size(); i++)
    {
        if((*L)->Colision(player1->getSprite()))
            return true;
        (*L)->move(moveSprite((*L)->getXp()+(*L)->getDx(), (*L)->getYp()+(*L)->getDy()));
        std::advance(L,1);
    }
    std::vector<std::unique_ptr<Keys>>::iterator k  = keys.begin();

    while(k!=keys.end())
    {
    if((*k)->Colision(player1))
        keys.erase(k);
    else
        k=std::next(k, 1);
    }

    return false;
}

bool Play::moveSprite(int y, int x) {
    if(_map[x][y]->getType() & 0x80)
        return true;
    if (x > map->getX() || y > map->getY() || x  < 0 || y  < 0)
        return true;
    return false;

}

Play::Play( sf::RenderWindow& window1, Maps * maps) : Map(maps) {
    window = &window1;
}


