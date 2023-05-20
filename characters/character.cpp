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
	public:
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
	
	void setIDextrityCharacter(IDextrityCharacter* dc) {
		this->dextrityCharacter = dc;
	}
	
	void setIntelligenceCharacter(IIntelligenceCharacter* ic) {
		this->intelligenceCharacter = ic;
	}
	
	void setIStrengthCharacter(IStrengthCharacter* sc) {
		this->strengthCharacter = sc;
	}
	
	void setWisdomCharacter(IWisdomCharacter* wc) {
		this->wisdomCharacter = wc;
	}
	// this method needs to implements to the subclasses who inherit this abstract class
	void display();

};
class RangerCharacter : public Character {

        public: RangerCharacter() {
                this->charismaCharacter = new CharismaLeadership();
                this->constitutionCharacter = new ConstitutionStrong();
                this->dextrityCharacter = new DexteritySlim();
                this->intelligenceCharacter = new IntelligenceInquisitive();
                this->strengthCharacter = new StrengthPlump();
                this->wisdomCharacter = new WisdomFoolish();
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



return 0;
}
