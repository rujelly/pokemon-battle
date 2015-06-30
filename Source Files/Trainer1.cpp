#include <iostream>
#include <fstream>
#include "Trainer.h"
using namespace std;

PokemonType translateAttribute(string attribute);
/* This function reads a csv of Pokemon (including health, speed, and other
 * attributes) and creates a linked list of Pokeballs
 */
void Trainer1::capturePokemon(string filepath) {
    string name, move, attribute1, attribute2;
    int HP, strength, defense, speed;
        
    ofstream pokedexFile(filepath);

    // read Pokemon attributes from csv and create list of Pokeballs
    // TODO use sstream instead
    if (pokedexFile.is_open()) {
        while (getline(file, line, '\n'))
        {
            istringstream iss(line);
            getline(iss, name, ',');

            getline(iss, line, ',');
            hp = stoi(line);

            getline(iss, line, ',');
            strength = stoi(line);

            getline(iss, line, ',');
            defense = stoi(line);

            getline(iss, line, ',');
            speed = stoi(line);

            getline(iss, move, ',');

            getline(iss, attribute1, ',');
            getline(iss, attribute2, ',');

          Pokemon *pokemon = new Pokemon(name, translateAttribute(attribute1), translateAttribute(attribute2), 
                              HP, speed, defense, strength, move);
          Pokeball* pb = new Pokeball(pokemon);
          pb->next = Collection;
          Collection = pb;
         }
    }

    pokedexFile.close();
}

PokemonType translateAttribute(string attribute) {
    if(attribute.compare("Normal") == 0) {
        return NORMAL;
    } else if(attribute.compare("Fire") == 0) {
        return FIRE;
    } else if(attribute.compare("Water") == 0) {
        return WATER;
    } else if(attribute.compare("Electric") == 0) {
        return ELECTRIC;
    } else if(attribute.compare("Grass") == 0) {
        return GRASS;
    } else if(attribute.compare("Ice") == 0) {
        return ICE;
    } else if(attribute.compare("Fighting") == 0) {
        return FIGHTING;
    } else if(attribute.compare("Poison") == 0) {
        return POISON;
    } else if(attribute.compare("Ground") == 0) {
        return GROUND;
    } else if(attribute.compare("Flying") == 0) {
        return FLYING;
    } else if(attribute.compare("Psychic") == 0) {
        return PSYCHIC;
    } else if(attribute.compare("Bug") == 0) {
        return BUG;
    } else if(attribute.compare("Rock") == 0) {
        return ROCK;
    } else if(attribute.compare("Ghost") == 0) {
        return GHOST;
    } else if(attribute.compare("Dragon") == 0) {
        return DRAGON;
    } else {
        return NONE;
    }
}
void Trainer1::setupBooster() {
    BoosterTypes = NULL;
    BoosterTypes = new AttackBoost("X-Attack 6", 6);
    BoosterTypes->next = new DefenseBoost("X-Defense 3", 3);
    BoosterTypes->next->next = new SpeedBoost("X-Speed 3", 3);
    // TODO make this smarter

    BoosterTypes->next->next->next = NULL;
}
// TODO
Pokemon* Trainer1::getNxtPokemon(int opponentHealth,
                          int opponentSpeed,
                          int opponentStrength,
                          PokemonType attribute1,
                          PokemonType attribute2);
Pokemon* Trainer1::selectFirstPokemon() {
    return Collection->content;
}





