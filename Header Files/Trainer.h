#include <iostream>
#include "Boost.h"
#include "Pokeball.h"
using namespace std;

class Trainer {
private:
    Pokeball *Collection;
    Boost *BoosterTypes;
public:
    string name;
    string residency;
    void capturePokemon(string filepath);
    void setupBooster();
    Boost* getBoosterSetting();
    Pokemon* getNxtPokemon(int opponentHealth,
                           int opponentSpeed,
                           int opponentStrength,
                           PokemonType attribute1,
                           PokemonType attribute2);
    Pokemon* selectFirstPokemon();
};
