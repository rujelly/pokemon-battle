#include <iostream>
#include "Pokemon.h"
using namespace std;

class Pokeball {
public:
    Pokemon *content;
    Pokeball *next;
};

// CC: Think about having a constructor and destructor to help with initialization and deleting of heap objects