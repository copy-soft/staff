#include "Constitution.h"
#include "IRanger.h"
#include "CharacterDecorator.h"
#include <string>
#include <iostream>
#include <cstddef>
#define null NULL
using namespace std;
class ConstitutionDecorator : public CharacterDecorator{
	protected: Constitution constitution;

	public: 
		ConstitutionDecorator(IRanger* rangerCharacterDecorator, Constitution constitution):CharacterDecorator(rangerCharacterDecorator){
		this->constitution = constitution;
		this->getConstitution();
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
		cout<<"XYR Character Constitution Option: " << constitution<<endl;
		return "test";
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
