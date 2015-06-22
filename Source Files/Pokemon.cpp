#include "Pokemon.h"
#include "PokemonType.h"

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
    move = "";
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
// returns the Pokemon's type(s) (Fire, Water, etc.)
PokemonType getAttribute(int id) {
    if(id == 1) {
        return attribute1;
    } else if (id == 2) {
        return attribute2;
    } else {
        return -1;
    }
    // TODO figure out if id is supposed to be 1 and 2 or some other
    // numbers, and make sure Pokemon w/ only 1 attribute return -1
}
int attack::Pokemon() {
    // TODO add code for determining a move. Is there a list of moves?

    cout << name << " attacks with " << move << endl;
}
int getSpeed::Pokemon() {
    return speed;
}
int getDefense::Pokemon() {
    return defense;
}



