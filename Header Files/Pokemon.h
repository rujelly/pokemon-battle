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
    string getName() {
        return name;
    }
    // determine if Pokemon has fainted
    bool fainted() {
        if(currentHealth <= 0) {
            return true;
        }
        return false;
    }
    int remainingHealth() {
        return currentHealth;
    }
    // subtract damage from Pokemon's health
    void damageTaken(int amount) {
        currentHealth -= amount;
    }
    // TODO this method
    int attack();
    int getSpeed() {
        return speed;
    }
    int getDefense() {
        return defense;
    }
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
