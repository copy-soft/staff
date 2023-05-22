#ifndef IRan
#define IRan
#include "ICharacter.h"
#include <iostream>
using namespace std;
class IRanger : public ICharacter {
	public:
	IRanger(IRanger* rangerCharacterDecorator){
	//cout<<rangerCharacterDecorator->getClothings()<<endl;
	};
	IRanger(){};
	
};
#endif
