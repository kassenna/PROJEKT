//
// Created by kasia on 03.06.19.
//

#ifndef PROJEKT_LOAD_H
#define PROJEKT_LOAD_H
#include <deque>
#include "map.h"
#include "Maps.h"

class Load {
protected:
    std::deque<Maps*>_maps;
    std::deque<Maps*>::iterator current;
    char* input;

public:
    Load(char *input);
    void CreateMap();
    void setCurrent();
};


#endif //PROJEKT_LOAD_H
