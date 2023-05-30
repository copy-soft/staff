#ifndef CharD
#define CharD
#include "IRanger.h"
#include <iostream>
template <class T>
class CharacterDecorator : public IRanger{
	
	public: T* rangerCharacterDecorator;

	public: 
	CharacterDecorator(IRanger* rangerCharacterDecorator):rangerCharacterDecorator((T*)rangerCharacterDecorator)	
	{
        //cout<<static_cast<T*>(this)->getClothings();

	//IRanger::IRanger(rangerCharacterDecorator);
	//this->rangerCharacterDecorator = (T*)rangerCharacterDecorator;
//cout<<rangerCharacterDecorator->getCharisma()<<endl;
	}
	CharacterDecorator(){};
};
#endif
