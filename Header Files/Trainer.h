#include <iostream>
#include "Boost.h"
#include "Pokeball.h"
using namespace std;

enum 

class Trainer {
private:
    Pokeball *Collection;
    Boost *BoosterTypes;
public:
    string name;
    string residency;

    Trainer(string name, string residency);
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

Trainer::Trainer(string name, string residency) {
    this->name = name;
    this->residency = residency;
}
