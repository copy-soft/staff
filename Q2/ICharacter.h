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
	string getConstitution(){return "constitution ICharacter";};
	string getIntelligence(){return "int";};
	string getWisdom(){return "ICharacter Wisdom";};
	string getCharisma(){return "ICharacter Charisma";};
	string getClothings(){return "ICharacter Clothings";};
};
#endif
