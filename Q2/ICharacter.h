#ifndef IChar
#define IChar
#include <string>
#include <iostream>
//#include "IRanger.h"
using namespace std;
class ICharacter{
	public:
        //ICharacter(ICharacter* rangerCharacterDecorator){
	//};
	ICharacter(){};
	string getStrength(){return "str";};
	string getDexterity(){return "dex";};
	string getConstitution(){return "ICharacter constitution";};
	string getIntelligence(){return "int";};
	string getWisdom(){return "ICharacter Wisdom";};
	string getCharisma(){return "ICharacter Charisma";};
	virtual string getClothings(){/*return "ICharacter Clothings";*/};
};
#endif
