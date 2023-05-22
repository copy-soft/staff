#include "Intelligence.h"
#include "IRanger.h"
#include <iostream>
#include <string>
#define null NULL
using namespace std;
class IntelligenceDecorator : public CharacterDecorator{
	
	protected: Intelligence intelligence;

	public: IntelligenceDecorator(IRanger* rangerCharacterDecorator, Intelligence intelligence){
		//super(rangerCharacterDecorator);
		this->intelligence = intelligence;

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
		cout<<"XYR Character Intelligence Option: " + intelligence<<endl;
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
	string getClothings() {
		rangerCharacterDecorator->getClothings();
		return null;
	}

};
