#ifndef IRan
#define IRan
#include "ICharacter.h"
#include <iostream>
using namespace std;
class IRanger : public ICharacter {
	public:
	IRanger(IRanger* rangerCharacterDecorator):ICharacter(rangerCharacterDecorator){
	//cout<<rangerCharacterDecorator->getCharisma()<<endl;
	};
	IRanger(){};
	
};
#endif
