//
// Created by kasia on 08.05.19.
//

#ifndef PROJEKT_CREATE_MAP_H
#define PROJEKT_CREATE_MAP_H

#include <fstream>
#include <iostream>
#define VOID    0b00000000
#define BLOCK   0b11111111



class Create_map {
std::fstream file;
public:
    bool file_open();
   void write();


};


#endif //PROJEKT_CREATE_MAP_H
