#include "Wisdom.h"
#include "IRanger.h"
#include <string>
#include <iostream>
#define null NULL
using namespace std;
class WisdomDecorator : public CharacterDecorator{
	
	protected: Wisdom wisdom;

	public: WisdomDecorator(IRanger* rangerCharacterDecorator, Wisdom wisdom){
	CharacterDecorator((IRanger*)rangerCharacterDecorator);
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
	string getWisdom() {
		rangerCharacterDecorator->getWisdom();
		cout<<"XYR Character Wisdom Option: " + wisdom<<endl;
		return null;
	}

	//@Override
	string getCharisma() {
		rangerCharacterDecorator->getCharisma();
		return null;
	}

	//@Override
	string getClothings() {
		rangerCharacterDecorator->getClothings();
		return null;
	}

};
