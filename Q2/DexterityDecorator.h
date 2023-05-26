#include "Dexterity.h"
#include "IRanger.h"
#include <iostream>
#include <string>
#define null NULL
using namespace std;
class DexterityDecorator : public CharacterDecorator<DexterityDecorator>{
	protected: Dexterity dexterity;

	public: DexterityDecorator(IRanger* rangerCharacterDecorator, Dexterity dexterity):CharacterDecorator(rangerCharacterDecorator){
		//super(rangerCharacterDecorator);
		this->dexterity = dexterity;
		//this->getDexterity();
		}

	//@Override
	string getStrength() {
		rangerCharacterDecorator->getStrength();
		return "test";
	}

	//@Override
	string getDexterity() {
		rangerCharacterDecorator->getDexterity();
		cout<<"XYR Character's Dexterity Option: "<<dexterity<<endl;
		return "test";
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
