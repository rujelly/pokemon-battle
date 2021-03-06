#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon(string name,
            PokemonType attribute1,
            PokemonType attribute2,
            int maxHealth,
            int speed,
            int defense,
            int strength,
            string move
            ) {
    this->name = name;
    this->attribute1 = attribute1;
    this->attribute2 = attribute2;
    this->maxHealth = maxHealth;
    this->currentHealth = maxHealth;
    this->speed = speed;
    this->defense = defense;
    this->strength = strength;
    this->move = move;
}
string Pokemon::getName() {
    return name;
}
// determine if Pokemon has fainted
bool Pokemon::fainted() {
    if(currentHealth <= 0) {
    return true;
    }
    return false;
}
int Pokemon::remainingHealth() {
    return currentHealth;
}
int Pokemon::getMaxHealth() {
    return maxHealth
}
// subtract damage from Pokemon's health
void Pokemon::damageTaken(int amount) {
    currentHealth -= amount;
}
// returns the Pokemon's type(s) (Fire, Water, etc.)
PokemonType Pokemon::getAttribute(int id) {
    if(id == 1) {
        return attribute1;
    } else if (id == 2) {
        return attribute2;
    } else {
        return -1;
    }
    // TODO figure out if id is supposed to be 1 and 2 or some other
    // numbers, and make sure Pokemon w/ only 1 type return -1
}
string Pokemon::attack() {
    cout << name << " attacks with " << move << endl;	
	return move;
}
int Pokemon::getSpeed() {
    return speed;
}
int Pokemon::getStrength() {
    return strength;
}
int Pokemon::getDefense() {
    return defense;
}



