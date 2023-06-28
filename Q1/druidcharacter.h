#include "character.h"
#include <iostream>
using namespace std;
class DruidCharacter : public Character {

	public: DruidCharacter() {
			
		this->setCharismaCharacter(new CharismaConfidence());
		this->setConstitutionCharacter(new ConstitutionSick());
		this->setDextrityCharacter(new DexterityClumsy());
		this->setIntelligenceCharacter(new IntelligenceStudious());
		this->setStrengthCharacter(new StrengthScrawny());
		this->setWisdomCharacter(new WisdomGoodJudgement());

		}

	//@Override
	void display() {
		cout<<"Hi, I am Druid Character in this D&D popular game."<<endl;
	}

};
