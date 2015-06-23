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
    std::string name;				// CC: Adding std:: will resolve any ambiguous type
    PokemonType attribute1;
    PokemonType attribute2;
    int maxHealth;
    int currentHealth;
    int speed;
    int defense;
    int strength;
    std::string move;				// CC: Adding std:: will resolve any ambiguous type
public:
    Pokemon(std::string name,		// CC: Adding std:: will resolve any ambiguous type
            PokemonType attribute1,
            PokemonType attribute2,
            int maxHealth,
            int speed,
            int defense,
            int strength			// CC: Missing comma here
            std::string move;		// CC: Addint std::string will resolve this; or add using namespace std on the top.  And remove the semi-colon.
            );
    std::string getName();			// CC: Adding std:: will resolve any ambiguous type
    bool fainted();
    int remainingHealth();
    void damageTaken(int amount);
    int attack();
    int getSpeed();
    int getDefense();

								// CC: Missing function getAttribute(int id) in the forward declaration. 
};
