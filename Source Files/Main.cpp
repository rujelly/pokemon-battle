#include <iostream>
#include <string>

#include "BattleSystem.h"
#include "Trainer.h"

int main() {

	BattleSystem *platform = new BattleSystem(new Trainer1(), new Trainer2());
	
	// Trigger the system to start battle
	platform->commenceBattle();

	// Trigger memory management clean-up
	delete(platform);

	return 0;
}