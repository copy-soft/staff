#ifndef IChar
#define IChar
#include <string>
#include <iostream>
#include "IRanger.h"
using namespace std;
class ICharacter{
	public:
        ICharacter(ICharacter* rangerCharacterDecorator){
	};
	ICharacter(){};
	string getStrength(){};
	string getDexterity(){return "dex";};
	string getConstitution(){return "constitution ICharacter";};
	string getIntelligence(){};
	string getWisdom(){};
	string getCharisma(){return "test";};
	string getClothings(){return "clothis ICharacter";};
};
#endif
