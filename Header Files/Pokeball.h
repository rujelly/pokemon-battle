#ifndef POKEBALL_H
#define POKEBALL_H

#include <iostream>
#include "Pokemon.h"
using namespace std;

class Pokeball {
public:
    Pokemon *content;
    Pokeball *next;

    Pokeball(Pokemon *pokemon);
    ~Pokeball();
};

// TODO create destructor to help with initialization and deleting of heap objects
Pokeball::Pokeball(Pokemon *pokemon) {
	this->content = pokemon;
}

#endif