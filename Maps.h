//
// Created by kasia on 03.06.19.
//

#ifndef PROJEKT_LISTMAP_H
#define PROJEKT_LISTMAP_H

#include <string>

class Maps{

    int nr_map =0;
    bool locked=false;
    std::string odczyt;
    int X;
    int Y;

public:
    void SetOdczyt(const char &);
    void SetOdczyt(const std::string &);

    void setX(int x);

    void setY(int y);

    const std::string &getOdczyt() const;

    int getX() const;

    int getY() const;

    Maps(){}
    Maps(int);

};



#endif //PROJEKT_MAPS_H
