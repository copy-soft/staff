#include "IRanger.h"
#include <iostream>
class CharacterDecorator : public IRanger{
	
	public: IRanger* rangerCharacterDecorator;

	public: 
	CharacterDecorator(IRanger* rangerCharacterDecorator1):IRanger(rangerCharacterDecorator1)
	{
	//IRanger((IRanger*)rangerCharacterDecorator1);
	rangerCharacterDecorator = rangerCharacterDecorator1;
	//std::cout<<rangerCharacterDecorator->getClothings()<<std::endl;
        //IRanger((IRanger*)rangerCharacterDecorator1);
	}
	CharacterDecorator(){};
};
