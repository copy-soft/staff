#include "Strength.h"
#include "IRanger.h"
#include <iostream>
#include <string>
#define null NULL
using namespace std;
class StrengthDecorator : public CharacterDecorator{
	
	protected: Strength strength;

	public: StrengthDecorator(IRanger* rangerCharacterDecorator, Strength strength){
		//super(rangerCharacterDecorator);
		this->strength = strength;
	}

	//@Override
	string getStrength() {
		rangerCharacterDecorator->getStrength();
		cout<<"XYR Character Strength Option: " + strength<<endl;
		return "XYR Character Strength Option: " + strength;
	}

	//@Override
	string getDexterity() {
		rangerCharacterDecorator->getDexterity();
		return null;
	}

	//@Override
	string getConstitution() {
		rangerCharacterDecorator->getConstitution();
		return null;
	}

	//@Override
	string getIntelligence() {
		rangerCharacterDecorator->getIntelligence();
		return null;
	}

	//@Override
	string getWisdom() {
		rangerCharacterDecorator->getWisdom();
		return null;
	}

	//@Override
	string getCharisma() {
		rangerCharacterDecorator->getCharisma();
		
		return null;
	}

	//@Override
	string getClothings(){
		rangerCharacterDecorator->getClothings();
		return null;
	}

};
