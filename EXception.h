//
// Created by kasia on 27.05.19.
//

#ifndef PROJEKT_EXCEPTION_H
#define PROJEKT_EXCEPTION_H

#include <bits/exception.h>

class Out_of_map : public std::exception{
char * text = "wyjscie poza mape";
public:

    const char *what() const override {
        return text;
    }
};
#endif //PROJEKT_EXCEPTION_H
