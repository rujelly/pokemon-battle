#include "Pokemon.h"
// #include "PokemonType.h"		// CC: You can comment this out now because it is included in Pokemon.h

Pokemon::Pokemon(string name,
            PokemonType attribute1,
            PokemonType attribute2,
            int maxHealth,
            int speed,
            int defense,
            int strength,				// CC: comma is needed here
            std::string move			// CC: likewise, please add std:: to the front
            ) {
    this->name = name;
    this->attribute1 = attribute1;
    this->attribute2 = attribute2;
    this->maxHealth = maxHealth;
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
int Pokemon::attack() {
    std::cout << name << " attacks with " << move << std::endl;		// CC: std:: is required for cout and cin; or add using namespace std; at the top
	return move;													// CC: Please return move
}
int Pokemon::getSpeed() {
    return speed;
}
int Pokemon::getDefense() {
    return defense;
}



