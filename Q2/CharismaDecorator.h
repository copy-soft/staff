#include "Charisma.h"
#include "IRanger.h"
#include "CharacterDecorator.h"
#include <iostream>
#include <string>
#include <cstddef>
#define null NULL
using namespace std;
class CharismaDecorator : public CharacterDecorator{
	protected: Charisma charisma;

	public: 

	CharismaDecorator(IRanger* rangerCharacterDecorator, Charisma charisma):
        CharacterDecorator(rangerCharacterDecorator){
		this->charisma = charisma;
		//cout<<rangerCharacterDecorator->getCharisma()<<endl;	
		this->getCharisma();
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
		return null;
	}

	//@Override
	string getCharisma() {
		rangerCharacterDecorator->getCharisma();
		cout<<"XYR Character Charisma Option: " << charisma<<endl;
		return "XYR Character Charisma Option: " + charisma;
	}

	//@Override
	string getClothings(){
		rangerCharacterDecorator->getClothings();
		return null;
	}

};
