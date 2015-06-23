#include <iostream>
//#include "BoostType.h"		// CC: Please remove, we'll have the BoostType with Boost class. 
using namespace std;


typedef enum {					// CC: I only want the primary type: SPEED, ATTACK, DEFENSE
	SPEED,
	ATTACK,
	DEFENSE
} BoostType;					// CC: It is BoostType and not BoosterType

class Boost {
public:
    string name;
    BoostType type;
    int slotConsumption;
    Boost *nextItem;
    int getBoostAmt(int maxHP, int speed, int attack, int defense);
};

// CC: Have the derived class be here.  The definitions can be in the Boost.cpp
// CC: For each class, create a constructor to help with the loading
//     SpeedBoost(string name, int consumption) { ... }
class SpeedBoost : public Boost {
	public:
	    string name;
	    BoostType type;
	    int slotConsumption;
	    Boost *nextItem;
	    int getBoostAmt(int maxHP, int speed, int attack, int defense);
	};
	
	class StrengthBoost : public Boost {
	public:
	    string name;
	    BoostType type;
	    int slotConsumption;
	    Boost *nextItem;
	    int getBoostAmt(int maxHP, int speed, int attack, int defense);
	};
	
	class DefenseBoost : public Boost {
	public:
	    string name;
	    BoostType type;
	    int slotConsumption;
	    Boost *nextItem;
	    int getBoostAmt(int maxHP, int speed, int attack, int defense);
	};
