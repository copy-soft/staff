#include "IRanger.h"
#include <string>
using namespace std;
class BarbarianCharacter : public IRanger {

	//@Override
	public: string getStrength() {
		return "Barbarian: Get Strength Ability of the Character";
	}

	//@Override
	string getDexterity() {
		return "Barbarian: Get Dexterity Ability of the Character";
	}

	//@Override
	string getConstitution() {
		return "Barbarian: Get Constitution Ability of the Character";
	}

	//@Override
	string getIntelligence() {
		return "Barbarian: Get Intelligence Ability of the Character";
	}

	//@Override
	string getWisdom() {
		return "Barbarian: Get Wisdom Ability of the Character";
	}

	//@Override
	string getCharisma() {
		return "Barbarian: Get Charisma Ability of the Character";
	}

	//@Override
	string getClothings() {
		return "Barbarian: Get Clothings Ability of the Character";
	}

	
};
