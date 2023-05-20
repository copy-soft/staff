#include <iostream>
#include <string>
using namespace std;
#include "ICharismaCharacter.h"
#include "IConstitutionCharacter.h"
#include "IDextrityCharacter.h"
#include "IIntelligenceCharacter.h"
#include "IStrengthCharacter.h"
#include "IWisdomCharacter.h"
//#include "RangerCharacter.h"

class Character {

	ICharismaCharacter* charismaCharacter;
	IConstitutionCharacter* constitutionCharacter;
	IDextrityCharacter* dextrityCharacter;
	IIntelligenceCharacter* intelligenceCharacter;
	IStrengthCharacter* strengthCharacter;
	IWisdomCharacter* wisdomCharacter;

	public: Character() {
		// empty
	}

	string performCharismaCharacter() {
		return this->charismaCharacter->charisma();
	}
	
	void performConstitutionCharacter() {
		this->constitutionCharacter->constitution();
	}
	
	void performDextrityCharacter() {
		this->dextrityCharacter->dextrity();
	}
	
	void performIntelligenceCharacter() {
		this->intelligenceCharacter->intelligence();
	}
	
	void performStrengthCharacter() {
		this->strengthCharacter->strength();
	}
	
	void performWisdomCharacter() {
		this->wisdomCharacter->wisdom();
	}
	
	void setCharismaCharacter(ICharismaCharacter* cc) {
		this->charismaCharacter = cc;
	}
	
	void setConstitutionCharacter(IConstitutionCharacter* cc) {
		this->constitutionCharacter = cc;
	}
	
	void setDextrityCharacter(IDextrityCharacter* dc) {
		this->dextrityCharacter = dc;
	}
	
	void setIntelligenceCharacter(IIntelligenceCharacter* ic) {
		this->intelligenceCharacter = ic;
	}
	
	void setStrengthCharacter(IStrengthCharacter* sc) {
		this->strengthCharacter = sc;
	}
	
	void setWisdomCharacter(IWisdomCharacter* wc) {
		this->wisdomCharacter = wc;
	}
	// this method needs to implements to the subclasses who inherit this abstract class
	void display();

};
class BarbarianCharacter : public Character{

	public: BarbarianCharacter() {
                //this->charismaCharacter = new CharismaAwkward();
                //this->constitutionCharacter = new ConstitutionHealthy();
                //this->dextrityCharacter = new DexteritySneaky();
                //this->intelligenceCharacter = new IntelligenceInquisitive();
                //this->strengthCharacter = new StrengthBurly();
                //this->wisdomCharacter = new WisdomFoolish();
        }
        
        //@Override
	public: void display() {
                cout<<"Hi, I am Barbarian Character in this D&D popular game."<<endl;
        }

};

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



return 0;
}
