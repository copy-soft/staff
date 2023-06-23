#include "Wisdom.h"
#include "IRanger.h"
#include "CharacterDecorator.h"
#include <string>
#include <iostream>
#define null "" 
using namespace std;
class WisdomDecorator : public CharacterDecorator{
	
	protected: Wisdom wisdom;
	public: WisdomDecorator(IRanger* rangerCharacterDecorator, Wisdom wisdom):CharacterDecorator(rangerCharacterDecorator)
		{
		//this->rangerCharacterDecorator=rangerCharacterDecorator;
			
		//CharacterDecorator::CharacterDecorator(rangerCharacterDecorator);
		this->wisdom = wisdom;
	}

	//@Override
	string getStrength() {
		rangerCharacterDecorator->getStrength();
		return null;
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
	string getWisdom() override{
		rangerCharacterDecorator->getWisdom();
		cout<<"XYR Character Wisdom Option: " << wis[wisdom]<<endl;
		return "XYR Character Wisdom Option: " ;
;
	}

	//@Override
	string getCharisma() {
		rangerCharacterDecorator->getCharisma();
		return "";
	}

	//@Override
	string getClothings() override{
		rangerCharacterDecorator->getClothings();
		return "call clothings of wisdom";
	}

};
