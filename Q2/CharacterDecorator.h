#include "IRanger.h"

class CharacterDecorator : public IRanger{
	
	protected: IRanger* rangerCharacterDecorator;

	public: 
		   void super(IRanger* rangerCharacterDecorator){};
		   CharacterDecorator(IRanger* rangerCharacterDecorator){
		//void super();
		this->rangerCharacterDecorator = rangerCharacterDecorator;
	}
	CharacterDecorator(){};
};
