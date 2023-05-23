#ifndef IRan
#define IRan
#include "ICharacter.h"
#include <iostream>
using namespace std;
class IRanger : public ICharacter {
	public:
	IRanger* rangerCharacterDecorator;
	IRanger(IRanger* rangerCharacterDecorator){
	rangerCharacterDecorator=rangerCharacterDecorator;
	//cout<<rangerCharacterDecorator->getCharisma()<<endl;
	};
	IRanger(){};
	
};
#endif
