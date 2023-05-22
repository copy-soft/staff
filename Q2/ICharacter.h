#ifndef IChar
#define IChar
#include <string>
#include <iostream>
#include "IRanger.h"
using namespace std;
class ICharacter{
	public:
        ICharacter(){};
	string getStrength(){};
	string getDexterity(){};
	string getConstitution(){};
	string getIntelligence(){};
	string getWisdom(){};
	string getCharisma(){return "charisma ICharacter";};
	string getClothings(){return "clothis ICharacter";};
};
#endif
