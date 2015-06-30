#ifndef POKEBALL_H
#define POKEBALL_H

#include <iostream>
#include "Pokemon.h"
using namespace std;

class Pokeball {
public:
    Pokemon *content;
    Pokeball *next;

    Pokeball(Pokemon *pokemon) {
    	this->content = pokemon;
    }
    ~Pokeball() {
    	delete(content);
    }
};

#endif