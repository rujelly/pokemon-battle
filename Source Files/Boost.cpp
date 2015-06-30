#include "Boost.h"

Boost::Boost(string name, int slotConsumption, BoostType type)
{

}


SpeedBoost::SpeedBoost(string name, int slotConsumption) : Boost(name, slotConsumption, SPEED) { }

int SpeedBoost::getBoostAmount(int hp, int speed, int attack, int defense) {

}


AttackBoost::AttackBoost(string name, int slotConsumption) : Boost(name, slotConsumption, ATTACK) { }

int AttackBoost::getBoostAmount(int hp, int speed, int attack, int defense) {

}


DefenseBoost::DefenseBoost(string name, int slotConsumption) : Boost(name, slotConsumption, DEFENSE) { }

int DefenseBoost::getBoostAmount(int hp, int speed, int attack, int defense) {

}
