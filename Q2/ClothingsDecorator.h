#include <cstddef>
#include "Clothings.h"
#include "IRanger.h"
#include <string>
#include <iostream>
#define null NULL
using namespace std;
class ClothingsDecorator : public CharacterDecorator{
	protected: Clothings clothings;//поле clothings типа Clothings
	//Конструктор с параметрами ranger....  и clothings
	public: ClothingsDecorator(IRanger* rangerCharacterDecorator, Clothings clothings)
		{
		//полю clothings присваивается параметр clothings
		this->clothings = clothings;
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
		return null;
	}

	//@Override
	string getClothings() {
		cout<<rangerCharacterDecorator->getClothings()<<endl;
		cout<<"XYR Character Clothings Option: " << clothings <<endl;
		return "XYR Character Clothings Option: ";// + clothings;
	}

};
