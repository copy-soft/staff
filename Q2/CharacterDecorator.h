#ifndef CharD
#define CharD
#include "IRanger.h"
#include <iostream>
template <class T>
class CharacterDecorator : public IRanger{
	
	public: IRanger* rangerCharacterDecorator;

	public: 
	CharacterDecorator(IRanger* rangerCharacterDecorator)	
	{
        //cout<<static_cast<T*>(this)->getClothings();

	//IRanger::IRanger(rangerCharacterDecorator);
	this->rangerCharacterDecorator = rangerCharacterDecorator;
//cout<<rangerCharacterDecorator->getCharisma()<<endl;
	}
	CharacterDecorator(){};
};
#endif
