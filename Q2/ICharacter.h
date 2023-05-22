#ifndef IChar
#define IChar
#include <string>
using namespace std;
class ICharacter{
	public:
	string getStrength(){};
	string getDexterity(){};
	string getConstitution(){};
	string getIntelligence(){};
	string getWisdom(){};
	string getCharisma(){};
	string getClothings(){return "test";};
};
#endif
