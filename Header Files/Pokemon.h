#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
using namespace std;

typedef enum {
	NONE = -1,
	NORMAL = 0,
	FIRE,
	WATER,
	ELECTRIC,
	GRASS,
	ICE,
	FIGHTING,
	POISON,
	GROUND,
	FLYING,
	PSYCHIC,
	BUG,
	ROCK,
	GHOST,
	DRAGON
} PokemonType;

class Pokemon {
private:
    string name;
    PokemonType attribute1;
    PokemonType attribute2;
    int maxHealth;
    int currentHealth;
    int speed;
    int defense;
    int strength;
    string move;
public:
    Pokemon(string name,
            PokemonType attribute1,
            PokemonType attribute2,
            int maxHealth,
            int speed,
            int defense,
            int strength
            string move
            );
    string getName();
    bool fainted();
    int remainingHealth();
    void damageTaken(int amount);
    int attack();
    int getSpeed();
    int getDefense();
    int getAttribute(int id); 
};

#endif
