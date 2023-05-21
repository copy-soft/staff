#include <iostream>
#include <string>
using namespace std;
//#include "character.h"
#include "rangercharacter.h"
//class BarbarianCharacter : public Character{

///	public: BarbarianCharacter() {
                //this->charismaCharacter = new CharismaAwkward();
                //this->constitutionCharacter = new ConstitutionHealthy();
                //this->dextrityCharacter = new DexteritySneaky();
                //this->intelligenceCharacter = new IntelligenceInquisitive();
                //this->strengthCharacter = new StrengthBurly();
                //this->wisdomCharacter = new WisdomFoolish();
//        }
        
        //@Override
//	public: void display() {
//                cout<<"Hi, I am Barbarian Character in this D&D popular game."<<endl;
  //      }

//};

int main(){

	RangerCharacter* ranger = new RangerCharacter();
                ranger->display();
                ranger->performCharismaCharacter();
                ranger->performConstitutionCharacter();
                ranger->performDextrityCharacter();
                ranger->performIntelligenceCharacter();
                ranger->performStrengthCharacter();
                ranger->performWisdomCharacter();
	/*
		BarbarianCharacter* barbarian = new BarbarianCharacter();
                barbarian->display();
                barbarian->setCharismaCharacter(new CharismaConfidence());
                barbarian->performCharismaCharacter();
                barbarian->setConstitutionCharacter(new ConstitutionStrong());
                barbarian->performConstitutionCharacter();
                barbarian->setDextrityCharacter(new DexteritySneaky());
                barbarian->performDextrityCharacter();
                barbarian->setIntelligenceCharacter(new IntelligenceForgetful());
                barbarian->performIntelligenceCharacter();
                barbarian->setStrengthCharacter(new StrengthScrawny());
                barbarian->performStrengthCharacter();
                barbarian->setWisdomCharacter(new WisdomOblivious());
                barbarian->performWisdomCharacter();

*/

return 0;
}
