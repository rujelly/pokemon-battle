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
    std::string name;
    PokemonType attribute1;
    PokemonType attribute2;
    int maxHealth;
    int currentHealth;
    int speed;
    int defense;
    int strength;
    std::string move;
public:
    Pokemon(std::string name,
            PokemonType attribute1,
            PokemonType attribute2,
            int maxHealth,
            int speed,
            int defense,
            int strength
            std::string move
            );
    std::string getName();
    bool fainted();
    int remainingHealth();
    void damageTaken(int amount);
    int attack();
    int getSpeed();
    int getDefense();
    int getAttribute(int id); 
};
