//
// Created by kasia on 01.06.19.
//

#include "Play.h"
#include "keys.h"

bool Play::play()
{
    window->setFramerateLimit(60);

    window->create( sf::VideoMode( 1600, 800, 32 ), " " );
    setMap();

    while(window->isOpen()) {
        window->clear(sf::Color(43, 50, 90 ));


        if(check_player()) {
           // window->close();
            return false;
        }if(_Sprites()) {

           // window->close();
            return false;
        }
        if(win())
        {
           // window->close();
            return true;
        }
        draw();

        window->display();

        sf::Event zdarzenie;

        while (window->pollEvent(zdarzenie)) {
            if (zdarzenie.type == sf::Event::Closed)
                window->close();
            if (zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Middle)
                window->close();
            if (zdarzenie.type == sf::Event::KeyPressed) {
                if( zdarzenie.key.code == sf::Keyboard::Escape)
                    return false;
                else {
                    key= zdarzenie.key.code;
                    PlayerTurn();
                }
            }
        }

    }
}

void Play::draw()
{
    for(int i = 0; i<map->X; i++)
        for(int j=0; j<map->Y; j++) {
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
bool Play::check_player() {
    int dx = player1->getDx();
    int dy = player1->getDy();

    if(dx==0 && dy==0) {
        frame = 1;
        return false;
    }
        frame--;
    if(frame==0){
        int x = player1->getXp();
        int y = player1->getYp();
        frame=frame_static;
        if(dy >0) {
            if (checkPool(x, y, 1, 0, 0x08))
            {
                return true;}
    }
    else if(dy <0) {
        if(checkPool(x, y, -1, 0, 0x02))
        { return true;}
    }
    else if(dx >0) {
       if( checkPool(x, y, 0, 1, 0x04))
       { return true;}
    }
    else if(dx <0) {
        if(checkPool(x, y, 0, -1, 0x01))
        { return true;}
    }

    } return false;

}

bool Play::checkPool(int x, int y, int dx, int dy, char dir) {
    if (x + dx > map->X || y + dy > map->Y || x + dx < 0 || y + dy < 0)
        return true;
    unsigned char temp = (unsigned char)_map[x + dx][y + dy]->getType();

    if (   temp  &  0x80   )  //jesli nie jest bloczek
    {
        player1->setDx(0);
        player1->setDy(0);

      if (temp & dir)
            return true;
        return false;

    }else{
        player1->setYp(y + dy);
        player1->setXp(x + dx);
        return false;

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
    if((*k)->Colision(player1->getSprite())) {
    keys.erase(k);
        }
        else
    k=std::next(k, 1);
    }

    return false;
}

bool Play::moveSprite(int y, int x) {
    if(_map[x][y]->getType() & 0x80)
        return true;
    if (x > map->X || y > map->Y || x  < 0 || y  < 0)
        return true;

    return false;

}

Play::Play( sf::RenderWindow& window1, Maps * maps) : Map(maps) {
    window = &window1;

}

bool Play::win() {

    if(meta.x==player1->getXp() && meta.y == player1->getYp() && keys.empty())
        return true;
    return false;

}


