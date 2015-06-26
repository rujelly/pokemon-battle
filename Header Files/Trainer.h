#ifndef TRAINER_H
#define TRAINER_H

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

    Trainer();
    Trainer(string name, string residency);
    virtual ~Trainer();

    virtual void capturePokemon(string filepath);
    virtual void setupBooster();
    Boost* getBoosterSetting();
    virtual Pokemon* getNxtPokemon(int opponentHealth,
                           int opponentSpeed,
                           int opponentStrength,
                           PokemonType attribute1,
                           PokemonType attribute2);
    virtual Pokemon* selectFirstPokemon();
};

Trainer::Trainer() {

}
Trainer::Trainer(string name, string residency) {
    this->name = name;
    this->residency = residency;
}
Boost* Trainer::getBoosterSetting() {
    return BoosterTypes;
}
// TODO define methods in Trainer class or only define in Trainer 1 and 2?

// TODO decide whether this code is necessary or not
/*class Trainer1 : public Trainer {
public:
  Trainer1();

  ~Trainer1();

  Trainer1(string name, string residency);
};

class Trainer2 : public Trainer {
public:
  Trainer2();

  ~Trainer2(); 

  Trainer2(string name, string residency);
};*/

#endif