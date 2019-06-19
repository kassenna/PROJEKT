
#include <iostream>
#include "Corners.h"
#include "../../Graphic.h"

Corners::Corners( int x, int y, char type) {
    int nr = (unsigned char)type % 16;

  if (type & 0x80)
      texture = Graphic::getInstance().load("spikes");
else
      texture = Graphic::getInstance().load("bloks");

    for (int i = 0; i < 4; i++) {
        corners[i] = new sf::Sprite(texture);
        corners[i]->setOrigin(corners[i]->getLocalBounds().width/2, corners[i]->getLocalBounds().height/2 );
        corners[i]->setPosition(64*x + corners[i]->getOrigin().x,64*y+corners[i]->getOrigin().y);

        if (nr % 2 == 1 ) {
            corners[i]->rotate(90*i);
        }   else
            {

                delete corners[i];
                corners[i] = nullptr;
            }
            nr = nr/2;
    }
}
void Corners::draw(sf::RenderWindow & window)
    {

        for (int i = 0; i < 4; i++) {
            if (corners[i] != nullptr) {
                window.draw(*corners[i]);

            }
        }

    }

Corners::~Corners() {
for(int i=0; i<4; i++)
{
    delete corners[i];
    corners[i] = nullptr;
}
}


