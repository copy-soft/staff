#ifndef IChar
#define IChar
#include <string>
#include <iostream>
using namespace std;
class ICharacter{
	public:
	ICharacter(){};
	string getStrength(){return "str";};
	string getDexterity(){return "dex";};
	string getConstitution(){return "ICharacter constitution";};
	string getIntelligence(){return "int";};
	virtual string getWisdom(){return "ICharacter Wisdom";};
	string getCharisma(){return "ICharacter Charisma";};
	virtual string getClothings(){return "ICharacter Clothings";};
};
#endif
