#include "Boost.h"

Boost::Boost(string name, int slotConsumption, BoostType type)
{
    this->name = name;
    this->slotConsumption = slotConsumption;
    this->type = type;
}


SpeedBoost::SpeedBoost(string name, int slotConsumption) : Boost(name, slotConsumption, SPEED) { }

int SpeedBoost::getBoostAmt(int hp, int speed, int attack, int defense) {
    if(slotConsumption == 2) {
    	return 2;
    } else if(slotConsumption == 3) {
    	return 4;
    } else if(slotConsumption == 6 && hp <= 200) {
    	return 16;
    } else {
    	return 0;
    }
}


AttackBoost::AttackBoost(string name, int slotConsumption) : Boost(name, slotConsumption, ATTACK) { }

int AttackBoost::getBoostAmt(int hp, int speed, int attack, int defense) {
    if(slotConsumption == 2) {
    	return 1;
    } else if(slotConsumption == 3) {
    	return 2;
    } else if(slotConsumption == 6 && defense <= 50) {
    	return 5;
    } else {
    	return 0;
    }
}


DefenseBoost::DefenseBoost(string name, int slotConsumption) : Boost(name, slotConsumption, DEFENSE) { }

int DefenseBoost::getBoostAmt(int hp, int speed, int attack, int defense) {
    if(slotConsumption == 2) {
    	return 1;
    } else if(slotConsumption == 3) {
    	return 2;
    } else if(slotConsumption == 7) {
    	return 7;
    } else {
    	return 0;
    }
}
