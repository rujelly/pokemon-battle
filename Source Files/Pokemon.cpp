#include "Pokemon.h"

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
string getName::Pokemon() {
    return name;
}
// determine if Pokemon has fainted
bool fainted::Pokemon() {
    if(currentHealth <= 0) {
    return true;
    }
    return false;
}
int remainingHealth::Pokemon() {
    return currentHealth;
}
// subtract damage from Pokemon's health
void damageTaken::Pokemon(int amount) {
    currentHealth -= amount;
}
// TODO this method
int attack::Pokemon();
int getSpeed::Pokemon() {
    return speed;
}
int getDefense::Pokemon() {
    return defense;
}



