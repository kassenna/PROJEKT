//
// Created by kasia on 15.05.19.
//

#ifndef PROJEKT_MOVINGGHOST_H
#define PROJEKT_MOVINGGHOST_H

#include "Sprite.h"

class MovingGhost : public Sprites {
  //  int time = 640;
   // int current_time = 1;
public:
    MovingGhost(int x, int y, int dX, int dY);

    void move(bool);
};


#endif //PROJEKT_MOVINGGHOST_H
