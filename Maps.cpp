//
// Created by kasia on 03.06.19.
//

#include "Maps.h"

const std::string &Maps::getOdczyt() const {
    return odczyt;
}

int Maps::getX() const {
    return X;
}

int Maps::getY() const {
    return Y;
}

void Maps::setX(int x) {
    X = x;
}

void Maps::setY(int y) {
    Y = y;
}

void Maps::SetOdczyt(const char& c) {
odczyt = odczyt+c;
}

void Maps::SetOdczyt(const std::string & string) {
odczyt = string;
}

Maps::Maps(int i) :nr_map(i){};
