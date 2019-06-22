#include <memory>

#include <vector>
#include "cmake-build-debug/Map/static_blocks.h"
#include <iostream>
#include "map.h"
#include <iterator>
#include <vector>
#include "Player.h"
#include "cmake-build-debug/Map/Void.h"
#include "cmake-build-debug/Map/wall.h"
#include "cmake-build-debug/Map/Start.h"
#include "Sprite.h"
#include "Ghost.h"
#include "cmake-build-debug/Map/wallSpikes.h"
#include "Graphic.h"
#include "MovingGhost.h"
#include "cmake-build-debug/Map/Meta.h"
#include "cmake-build-debug/Map/Way.h"
#include "keys.h"
#include "cmake-build-debug/Map/Lock.h"
#include "cmake-build-debug/Map/Pistol.h"
#include "ball.h"


void Map::setMap()
    {
int k=0;
    unsigned char temp;
        player1 = new Player();
        for(int i=0; i< map->getX(); i++) {
            _map.emplace_back(map->getY());
            for (int j = 0; j < map->getY(); j++) {
                temp = map->getOdczyt()[i * map->getX() + j];
                                                            StaticBlocks *nowy = nullptr;
                if ((temp & 0x80)== 0x80) {
                    if (temp == 0x80)                       nowy = new Wall(temp, j, i);
                    else if ((temp & 0xC0) == 0xC0)         nowy= new Lock(temp, j, i);
                    else if((temp&0xB0) ==0xB0) {
                                                            nowy = new Pistol(temp, j, i);
                                                            Ball *ball = new Ball(j, i);

                                                            Pistol* pistol =  static_cast<Pistol*>(nowy);
                                                            ball->setDx(pistol->getDx());
                                                            ball->setDy(pistol->getDy());
                                                            sprites.emplace_back(ball);
                    }
                    else                                    nowy = new WallSpikes(temp, j, i);
                }

                else {
                    if (temp == 0x00)                       nowy = new Void(temp, j, i);
                    else if ((temp & 0x70) == 0x70)         nowy = new Meta(temp, j, i);
                    else if ((temp & 0x60) == 0x60) {       nowy = new Void(temp, j, i);
                                                            keys.emplace_back(std::make_unique<Keys>(j, i));    k++;
                    } else if (temp & 0x30) {

                        if (temp == 0x30)                   sprites.emplace_back(new Ghost(j, i));
                        else                                 sprites.emplace_back(new MovingGhost(j, i, temp));

                                                            nowy = new Void(temp, j, i);
                    } else if (temp == 0x0F) {
                                                            nowy = new Start(j, i, temp);
                                                            player1->setSpite(i, j);
                    } else if ((temp & 0x40) == 0x40) {
                                                            nowy = new Portal(temp, j, i);
                                                            portals.emplace_back(static_cast<Portal *>(nowy));
                    } else if(temp & 0x0F)                  nowy = new Way(temp, j, i);
                }
                    _map[i][j] = nowy;

                }
            }
        setPortals();
        player1->setKey(k);
    }


Map::Map(Maps *maps)  {
map = maps;

}

void Map::setPortals() {

    std::list<Portal*>::iterator itp;
    std::list<Portal*>::iterator itp2;

    while(!portals.empty()){

   itp = portals.begin();
   itp2 = std::next(itp, 1);
   bool nomatch = true;
   while (itp2!=portals.end() && nomatch) {
       if ((*itp)->getNr() == (*itp2)->getNr()) {
           (*itp)->set((*itp2)->getX(), (*itp2)->getY());
           (*itp2)->set((*itp)->getX(), (*itp)->getY());
           portals.erase(itp);
           portals.erase(itp2);
           nomatch = false;

       }

    else itp2++;


    }

}}

Map::~Map() {
    delete player1;
    player1 = nullptr;

    for(int i =0; i< map->getX(); i++  )
    for(int j =0; j< map->getY(); j++  )
    {
        delete _map[i][j];
        _map[i][j] = nullptr;
    }
    std::list<Sprites*>::iterator sp;
    sp= sprites.begin();
    while(sp!=sprites.end())
    {
        delete (*sp);
        (*sp)= nullptr;
        std::advance(sp, 1);
    }


}








