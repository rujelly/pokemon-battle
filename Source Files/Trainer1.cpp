#include <iostream>
#include <fstream>
#include "Trainer.h"
using namespace std;

class Trainer1 : public Trainer {
public:
     /* This function reads a csv of Pokemon (including health, speed, and other
      * attributes) and creates a linked list of Pokeballs
      */
    void capturePokemon(string filepath) {
        string name, move, attribute1, attribute2;
        int HP, strength, defense, speed;

        ofstream pokedexFile("../Resources/Pokedex.csv");

        // TODO string->integer and create linked list of Pokeballs
        if (file.is_open()) {
            while(getline(file, name, ',')) {
              getline(file, stoi(HP, nullptr, 10), ',');
              getline(file, stoi(strength, nullptr, 10), ',');
              getline(file, stoi(defense, nullptr, 10), ',');
              getline(file, stoi(speed, nullptr, 10), ',');
              getline(file, move, ',');
              getline(file, attribute1, ',');
              getline(file, attribute2, ',');
            }
        }

        pokedexFile.close();
    }
    // TODO these 3 mehods
    void setupBooster();
    Pokemon* getNxtPokemon(int opponentHealth,
                          int opponentSpeed,
                          int opponentStrength,
                          PokemonType attribute1,
                          PokemonType attribute2);
    Pokemon* selectFirstPokemon();
};    
