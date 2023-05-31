#ifndef CharD
#define CharD
#include "IRanger.h"
#include <iostream>
template <class T>
class CharacterDecorator : public IRanger{
	
	protected: 
	T* rangerCharacterDecorator;

	public: 
	CharacterDecorator(IRanger* rangerCharacterDecorator):rangerCharacterDecorator((T*)rangerCharacterDecorator){}
	CharacterDecorator(){}
};
#endif
