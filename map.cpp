#include <memory>

#include <vector>
#include "static_blocks.h"
#include <fstream>
#include <iostream>
#include "map.h"
#include <iterator>
#include <vector>
#include "Player.h"
#include "Void.h"
#include "wall.h"
#include "Start.h"
#include "Sprite.h"
#include "Ghost.h"
#include "wallSpikes.h"
#include "Graphics.h"
#include "MovingGhost.h"
#include "Meta.h"
#include "Way.h"
#include "keys.h"

void Map::setMap()
    {

    unsigned char temp;
    std::cout << (int)map->X;
        for(int i=0; i< map->X; i++)
        {
            _map.emplace_back(map->Y);
            for(int j=0; j<map->Y; j++){
                temp= map->odczyt[i*map->X+j];
                StaticBlocks *nowy = nullptr;
                std::cout << (int)temp;
              if((temp & 0x80 )== 0x80){
              if(temp == 0x80)          nowy = new Wall(temp, j, i);
              else                      nowy = new WallSpikes(temp, j, i);
              }
              else
                  {
              if(temp == 0x00)                  nowy = new Void(j, i);
              else if((temp & 0x70)==0x70) {
                                                nowy = new Meta(temp, j, i);
                                                meta.x=i; meta.y=j;
              }else if((temp & 0x60)==0x60) {
                                                nowy = new Void(j, i);

                                                keys.emplace_back( std::make_unique<Keys>(j,i));
                                            }
              else if( temp & 0x30 )
              {
                                                Sprites * new_Sprite;
                  if(temp == 0x30)              new_Sprite = new Ghost(j, i);
                  else if((temp & 0x10)==0x10)  new_Sprite = new MovingGhost(j, i, 0, 1);
                  else if((temp & 0x20)==0x20)  new_Sprite = new MovingGhost(j, i, 1, 0);
                                                sprites.emplace_back(new_Sprite);
                                                nowy = new Void(j, i);
              }
              else if (temp  == 0x0F )
                                                {

                                                nowy = new Start(j, i, temp);
                                                player1 = new Player(j, i);
                                                }
              else if ((temp & 0x0F) != 0x00 )
                                                nowy = new Way(temp, j, i);
              }
            _map[i][j] =nowy;
          }
        }
    }
Map::Map(Maps *maps)  {
map = maps;

}
