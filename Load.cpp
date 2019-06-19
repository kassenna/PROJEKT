//
// Created by kasia on 03.06.19.
//

#include "Load.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
Load::Load( char *in)  {
    input =new char(sizeof(in)+1);
    std::memcpy(input, in, sizeof(in)+1);
}

void Load::CreateMap() {
    unsigned char temp;
    std::ifstream plik;
    plik.open("ArcyMarbi3", std::ios::in | std::ios::binary);

    if(!plik.is_open())
    {
        std::cout << "brak pliku";  return;
    }
    plik.read((char*)& temp, sizeof temp);

    while(temp!=0xFF){
        Maps* n= new Maps(_max);
        _max++;
        n->setX(temp);
        plik.read(( char * ) & temp, sizeof(temp) );
        if(temp==0xFF)
            break;
        n->setY(temp);
        while(temp !=0xFF)
        {
            plik.read((char*)& temp, sizeof temp);
            n->SetOdczyt(temp);
        }
        plik.read((char*)& temp, sizeof temp);
   _maps.emplace_back(n);
    }
    setCurrent();
}

void Load::setCurrent() {
current = _maps.begin();

}

Load::~Load() {
delete input;
input = nullptr;
}
