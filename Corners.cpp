
#include <iostream>
#include "Corners.h"

Corners::Corners( int x, int y, char type) {
    int nr = (unsigned char)type % 16;
    std::cout << x <<' ' <<y <<'\n';
  if (type & 0x80)
      texture.loadFromFile("grafiki/spikes2.png");
else
    texture.loadFromFile("grafiki/bloks2.png");

    for (int i = 0; i < 4; i++) {
        corners[i] = new sf::Sprite(texture);
        corners[i]->setOrigin(corners[i]->getLocalBounds().width/2, corners[i]->getLocalBounds().height/2 );
        corners[i]->setPosition(64*x + corners[i]->getOrigin().x,64*y+corners[i]->getOrigin().y);

        if (nr % 2 == 0 ) {
            delete corners[i];
            corners[i] = nullptr;
        }   else
            {
                corners[i]->rotate(90*i);
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


