#include "IRanger.h";

class CharacterDecorator : public IRanger {
	
	protected: IRanger rangerCharacterDecorator;

	public: CharacterDecorator(IRanger rangerCharacterDecorator) {
		super();
		this.rangerCharacterDecorator = rangerCharacterDecorator;
	}
};
