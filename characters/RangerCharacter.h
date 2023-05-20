class RangerCharacter : public Character {

	public: RangerCharacter() {
		this->charismaCharacter = new CharismaLeadership();
		this->constitutionCharacter = new ConstitutionStrong();
		this->dextrityCharacter = new DexteritySlim();
		this->intelligenceCharacter = new IntelligenceInquisitive();
		this->strengthCharacter = new StrengthPlump();
		this->wisdomCharacter = new WisdomFoolish();
	}

	//@Override
	void display() {
		cout<<"Hi, I am Ranger Character in this D&D popular game.";
	}

};
