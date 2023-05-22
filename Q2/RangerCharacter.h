#include "IRanger.h"
#include <string>
using namespace std;
class RangerCharacter : public IRanger{

	public: RangerCharacter(IRanger* rangerCharacterDecorator){

	IRanger((IRanger*)rangerCharacterDecorator);
	};
	RangerCharacter(){};
	//@Override
	public: string getStrength() {
		
		return "Ranger: Get Strength Ability of the Character";
	}

	//@Override
	string getDexterity() {
		return "Ranger: Get Dexterity Ability of the Character";
	}

	//@Override
	string getConstitution() {
		return "Ranger: Get Constitution Ability of the Character";
	}

	//@Override
	string getIntelligence() {
		return "Ranger: Get Intelligence Ability of the Character";
	}

	//@Override
	string getWisdom() {
		return "Ranger: Get Wisdom Ability of the Character";
	}

	//@Override
	string getCharisma() {
		return "Ranger: Get Charisma Ability of the Character";
	}

	//@Override
	string getClothings() {
		return "Ranger: Get Clothings Ability of the Character";
	}

	
};
