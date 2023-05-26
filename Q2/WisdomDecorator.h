#include "Wisdom.h"
#include "IRanger.h"
#include "CharacterDecorator.h"
#include <string>
#include <iostream>
#define null NULL
using namespace std;
class WisdomDecorator : public CharacterDecorator<WisdomDecorator>{
	
	protected: Wisdom wisdom;
	//IRanger* rangerCharacterDecorator;
	public: WisdomDecorator(IRanger* rangerCharacterDecorator, Wisdom wisdom){
		this->rangerCharacterDecorator=rangerCharacterDecorator;
			
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
	string getWisdom() {
		cout<<rangerCharacterDecorator->getWisdom()<<endl;
		cout<<"XYR Character Wisdom Option: " << wisdom<<endl;
		return "XYR Character Wisdom Option: " ;
;
	}

	//@Override
	string getCharisma() {
		rangerCharacterDecorator->getCharisma();
		return null;
	}

	//@Override
	string getClothings() {
		cout<<rangerCharacterDecorator->getClothings()<<endl;
		return "call clothings of wisdom";
	}

};
