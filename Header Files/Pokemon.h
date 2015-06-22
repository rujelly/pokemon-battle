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
    string move;
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
