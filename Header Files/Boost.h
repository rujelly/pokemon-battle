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

    // TODO decide if constructor will take type as BoostType or string then convert later
    Boost::Boost(string name, BoostType type, int slotConsumption);
    int getBoostAmt(int maxHP, int speed, int attack, int defense);
};

class SpeedBoost : public Boost {
public:
	string name;
	BoostType type;
	int slotConsumption;
	Boost *nextItem;

	SpeedBoost::SpeedBoost(string name, BoostType type, int slotConsumption);
	int getBoostAmt(int maxHP, int speed, int attack, int defense);
};
	
class StrengthBoost : public Boost {
public:
	string name;
	BoostType type;
	int slotConsumption;
	Boost *nextItem;

	StrengthBoost::StrengthBoost(string name, BoostType type, int slotConsumption);
	int getBoostAmt(int maxHP, int speed, int attack, int defense);
};

class DefenseBoost : public Boost {
public:
	string name;
	BoostType type;
	int slotConsumption;
	Boost *nextItem;

	DefenseBoost::DefenseBoost(string name, BoostType type, int slotConsumption);
	int getBoostAmt(int maxHP, int speed, int attack, int defense);
};

#endif