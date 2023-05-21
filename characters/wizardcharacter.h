#include <iostream>
using namespace std;
class WizardCharacter : public Character {

	public: WizardCharacter() {
		this->setCharismaCharacter(new CharismaConfidence());
		this->setConstitutionCharacter(new ConstitutionFrail());
		this->setDextrityCharacter(new DexterityClumsy());
		this->setIntelligenceCharacter(new IntelligenceForgetful());
		this->setStrengthCharacter(new StrengthFit());
		this->setWisdomCharacter(new WisdomOblivious());
	}

	//@Override
	void display() {
		cout<<"Hi, I am Wizard Character in this D&D popular game."<<endl;
	}

};
