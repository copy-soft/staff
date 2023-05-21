#include <iostream>
#include <string>
using namespace std;
//#include "character.h"
#include "rangercharacter.h"
#include "barbariancharacter.h"
#include "wizardcharacter.h"
#include "druidcharacter.h"
int main(){

		RangerCharacter* ranger = new RangerCharacter();
                ranger->display();
                ranger->performCharismaCharacter();
                ranger->performConstitutionCharacter();
                ranger->performDextrityCharacter();
                ranger->performIntelligenceCharacter();
                ranger->performStrengthCharacter();
                ranger->performWisdomCharacter();
	
		BarbarianCharacter* barbarian = new BarbarianCharacter();
                barbarian->display();
                //barbarian->setCharismaCharacter(new CharismaConfidence());
                barbarian->performCharismaCharacter();
                //barbarian->setConstitutionCharacter(new ConstitutionStrong());
                barbarian->performConstitutionCharacter();
                //barbarian->setDextrityCharacter(new DexteritySneaky());
                barbarian->performDextrityCharacter();
                //barbarian->setIntelligenceCharacter(new IntelligenceForgetful());
                barbarian->performIntelligenceCharacter();
                //barbarian->setStrengthCharacter(new StrengthScrawny());
                barbarian->performStrengthCharacter();
                //barbarian->setWisdomCharacter(new WisdomOblivious());
                barbarian->performWisdomCharacter();

		WizardCharacter* wizard = new WizardCharacter();
                wizard->display();
		wizard->performCharismaCharacter();
		wizard->performConstitutionCharacter();
                wizard->performDextrityCharacter();
                wizard->performIntelligenceCharacter();
                wizard->performStrengthCharacter();
                wizard->performWisdomCharacter();
	
		DruidCharacter* druid = new DruidCharacter();
                druid->display();
		druid->performCharismaCharacter();
                druid->performConstitutionCharacter();
                druid->performDextrityCharacter();
                druid->performIntelligenceCharacter();
                druid->performStrengthCharacter();
                druid->performWisdomCharacter();


return 0;
}
