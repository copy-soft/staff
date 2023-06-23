#include "Intelligence.h"
#include "IRanger.h"
#include <iostream>
#include <string>
#define null "" 
using namespace std;
class IntelligenceDecorator : public CharacterDecorator{
	
	protected: Intelligence intelligence;

	public: IntelligenceDecorator(IRanger* rangerCharacterDecorator, Intelligence intelligence):CharacterDecorator(rangerCharacterDecorator){
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
	string getIntelligence() override{
		rangerCharacterDecorator->getIntelligence();
		cout<<"XYR Character Intelligence Option: " << intl[intelligence]<<endl;
		return "";
	}

	//@Override
	string getWisdom() {
		rangerCharacterDecorator->getWisdom();
		return "";
	}

	//@Override
	string getCharisma() {
		rangerCharacterDecorator->getCharisma();
		
		return "";
	}

	//@Override
	string getClothings(){
		rangerCharacterDecorator->getClothings();
		return "";
	}

};
