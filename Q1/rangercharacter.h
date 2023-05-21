#include <iostream>
#include "character.h"
using namespace std;
class RangerCharacter : public Character {

	public: RangerCharacter() {
		this->setCharismaCharacter(new CharismaLeadership());
		this->setConstitutionCharacter(new ConstitutionStrong());
		this->setDextrityCharacter(new DexteritySlim());
		this->setIntelligenceCharacter(new IntelligenceInquisitive());
		this->setStrengthCharacter(new StrengthPlump());
		this->setWisdomCharacter(new WisdomFoolish());
	}

	//@Override
	void display() {
		cout<<"Hi, I am Ranger Character in this D&D popular game."<<endl;
	}

};
