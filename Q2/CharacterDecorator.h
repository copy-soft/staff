#ifndef CharD
#define CharD
#include "IRanger.h"
#include <iostream>
class CharacterDecorator : public IRanger{
	
	protected: 
	IRanger* rangerCharacterDecorator;

	public: 
	CharacterDecorator(IRanger* rangerCharacterDecorator):rangerCharacterDecorator(rangerCharacterDecorator){}
	CharacterDecorator(){}
};
#endif
