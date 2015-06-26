#ifndef BOOST_H
#define BOOST_H

#include <iostream>
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

    Boost(string name, BoostType type, int slotConsumption);
    virtual int getBoostAmt(int maxHP, int speed, int attack, int defense) {
    	return 0;
    }
};

class SpeedBoost : public Boost {
public:
	string name;
	BoostType type;
	int slotConsumption;
	Boost *nextItem;

	SpeedBoost(string name, BoostType type, int slotConsumption);
	int getBoostAmt(int maxHP, int speed, int attack, int defense);
};
	
class StrengthBoost : public Boost {
public:
	string name;
	BoostType type;
	int slotConsumption;
	Boost *nextItem;

	StrengthBoost(string name, BoostType type, int slotConsumption);
	int getBoostAmt(int maxHP, int speed, int attack, int defense);
};

class DefenseBoost : public Boost {
public:
	string name;
	BoostType type;
	int slotConsumption;
	Boost *nextItem;

	DefenseBoost(string name, BoostType type, int slotConsumption);
	int getBoostAmt(int maxHP, int speed, int attack, int defense);
};

#endif