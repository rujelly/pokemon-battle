#include <iostream>
using namespace std;

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
    string attack;
public:
    Pokemon(string name,
            PokemonType attribute1,
            PokemonType attribute2,
            int maxHealth,
            int speed,
            int defense,
            int strength
            );
    string getName();
    bool fainted();
    int remainingHealth();
    void damageTaken(int amount);
    int attack();
    int getSpeed();
    int getDefense();
};

Pokemon::Pokemon(string name,
            PokemonType attribute1,
            PokemonType attribute2,
            int maxHealth,
            int speed,
            int defense,
            int strength
            ) {
    this->name = name;
    this->attribute1 = attribute1;
    this->attribute2 = attribute2;
    this->maxHealth = maxHealth;
    this->speed = speed;
    this->defense = defense;
    this->strength = strength;
}
