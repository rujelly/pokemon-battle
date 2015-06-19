#include <iostream>
#include <fstream>
#include "Trainer.h"
using namespace std;

class Trainer1 : public Trainer {
public:
	  /* This function reads a csv of Pokemon (including health, speed, and other
     * attributes) and puts each Pokemon in a Pokeball
     */
    void capturePokemon(string filepath) {
        ofstream pokedexFile;
        pokedexFile.open("Pokedex.csv");

            // TODO file parsing and creating linked list of Pokeballs

        pokedexFile.close();
    }
    void setupBooster();
    Pokemon* getNxtPokemon(int opponentHealth,
                          int opponentSpeed,
                          int opponentStrength,
                          PokemonType attribute1,
                          PokemonType attribute2);
    Pokemon* selectFirstPokemon();
};    
