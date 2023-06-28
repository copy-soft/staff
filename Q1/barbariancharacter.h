#include "character.h"
#include <iostream>
using namespace std;
class BarbarianCharacter : public Character{

	public: BarbarianCharacter() {
		this->setCharismaCharacter(new CharismaAwkward());
		this->setConstitutionCharacter(new ConstitutionHealthy());
		this->setDextrityCharacter(new DexteritySneaky());
		this->setIntelligenceCharacter(new IntelligenceInquisitive());
		this->setStrengthCharacter(new StrengthBurly());
		this->setWisdomCharacter(new WisdomFoolish());
	}
	
	//@Override
	void display() {
		cout<<"Hi, I am Barbarian Character in this D&D popular game."<<endl;
	}
};
