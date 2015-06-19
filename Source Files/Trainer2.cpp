#include <iostream>
#include "Trainer.h"
using namespace std;

class Trainer1 : public Trainer {
public:
    void capturePokemon(string filepath);
    void setupBooster();
    Pokemon* getNxtPokemon(int opponentHealth,
         				   int opponentSpeed,
                           int opponentStrength,
                           PokemonType attribute1,
                           PokemonType attribute2);
    Pokemon* selectFirstPokemon();
};    
