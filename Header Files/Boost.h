#ifndef BOOST_H
#define BOOST_H

using namespace std;

typedef enum {
	SPEED,
	ATTACK,
	DEFENSE
} BoostType;

class Boost {
public:
    string name;
    BoostType type;
    int slotConsumption;
    Boost *nextItem;

    Boost(string name, int slotConsumption, BoostType type);
    virtual int getBoostAmt(int hp, int speed, int attack, int defense) {
    	return 0;
    }
};

class SpeedBoost : public Boost {
public:
	SpeedBoost(string name, int slotConsumption);
	int getBoostAmt(int hp, int speed, int attack, int defense);
};
	
class StrengthBoost : public Boost {
public:
	StrengthBoost(string name, int slotConsumption);
	int getBoostAmt(int hp, int speed, int attack, int defense);
};

class DefenseBoost : public Boost {
public:
	DefenseBoost(string name, int slotConsumption);
	int getBoostAmt(int hp, int speed, int attack, int defense);
};

#endif