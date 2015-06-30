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
    void deleteCollection(Pokeball* collectionPtr);
};

Trainer::Trainer() {
    name = "Andrew Roman";
    city = "Tempe";
}
Trainer::Trainer(string name, string residency) {
    this->name = name;
    this->residency = residency;
}
Trainer::~Trainer() {
    deleteCollection(Collection);
    Collection = NULL;

    // TODO delete BoosterTypes (also a linked list)
}
Boost* Trainer::getBoosterSetting() {
    return BoosterTypes;
}
void Trainer::deleteCollection(Pokeball* collectionPtr) {
    if(collectionPtr != NULL) {
        deleteCollection(collectionPtr->next);
        delete(collectionPtr);
    }
}

class Trainer1 : public Trainer {
public:
    // constructors
    Trainer1() : Trainer("Andrew Roman", "Tempe") {

    }
    Trainer1(string name, string residency) : Trainer(name, residency) {

    }

    // methods
    void capturePokemon(string filepath);
    // TODO these 3 mehods
    void setupBooster();
    Pokemon* getNxtPokemon(int opponentHealth, // signature is different from instructor's
                          int opponentSpeed,
                          int opponentStrength,
                          PokemonType attribute1,
                          PokemonType attribute2);
    Pokemon* selectFirstPokemon();
};  

class Trainer2 : public Trainer {
public:
  Trainer2();

  ~Trainer2(); 

  Trainer2(string name, string residency);
};

#endif