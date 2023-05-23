#ifndef CharD
#define CharD
#include "IRanger.h"
#include <iostream>
class CharacterDecorator : public IRanger{
	
	public: IRanger* rangerCharacterDecorator;

	public: 
	CharacterDecorator(IRanger* rangerCharacterDecorator1):IRanger(rangerCharacterDecorator1)
	{
	rangerCharacterDecorator = rangerCharacterDecorator1;
	//cout<<rangerCharacterDecorator->getCharisma()<<endl;
	}
	CharacterDecorator(){};
};
#endif
