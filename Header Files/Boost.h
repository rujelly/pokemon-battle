// This file contains Boost class and its derived classes:
// SpeedBoost, StrengthBoost, and DefenseBoost

#include <iostream>
using namespace std;

class Boost {
public:
    string name;
    BoostType type;
    int slotConsumption;
    Boost *nextItem;
    int getBoostAmt(int maxHP, int speed, int attack, int defense);
};

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
