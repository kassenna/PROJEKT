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
    plik.open("Mapa_ff", std::ios::in | std::ios::binary);

    if(!plik.is_open())
    {
        std::cout << "brak pliku";  return;
    }
    plik.read((char*)& temp, sizeof temp);
    while(temp!=0xFF){
    int i=0;
        Maps* n= new Maps;
        n->X = temp;
        plik.read(( char * ) & temp, sizeof(temp) );
        if(temp==0xFF)
            break;
        n->Y=temp;
        while(temp !=0xFF)
        {
            plik.read((char*)& temp, sizeof temp);
            n->odczyt+=temp;
        }
        plik.read((char*)& temp, sizeof temp);
   _maps.emplace_back(n);
    }
    setCurrent();
}

void Load::setCurrent() {
current = _maps.begin();

}
