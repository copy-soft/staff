#ifndef IChar
#define IChar
#include <string>
#include <iostream>
using namespace std;
class ICharacter{
	public:
	ICharacter(){};
	virtual string getStrength(){return "ICharacter Strength";};
	virtual string getDexterity(){return "ICharacter Dexterity";};
	virtual string getConstitution(){return "ICharacter Constitution";};
	virtual string getIntelligence(){return "ICharacter Intelligence";};
	virtual string getWisdom(){return "ICharacter Wisdom";};
	virtual string getCharisma(){return "ICharacter Charisma";};
	virtual string getClothings(){return "ICharacter Clothings";};
};
#endif
