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
