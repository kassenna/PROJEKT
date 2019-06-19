//
// Created by kasia on 27.05.19.
//

#ifndef PROJEKT_EXCEPTION_H
#define PROJEKT_EXCEPTION_H

#include <bits/exception.h>

class Out_of_map : public std::exception{

public:

    virtual const char *what() const throw() {
        return "ERROR";
    }
} ;
#endif //PROJEKT_EXCEPTION_H
