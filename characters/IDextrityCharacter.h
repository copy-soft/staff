#include <iostream>
using namespace std;
class IDextrityCharacter {
	public: 
	virtual void dextrity()=0;
};


class DexterityAwkward : public  IDextrityCharacter{

        //@Override
	public: 
		void dextrity() override{
                cout<<"This Dexterity innate abilities has Awkward Characteristics."<<endl;
        }

};

class DexterityClumsy : public IDextrityCharacter{

        //@Override
	public: 
		void dextrity() override{
                cout<<"This Dexterity innate abilities has Clumsy Characteristics."<<endl;
        }

};

class DexteritySlim : public IDextrityCharacter{

        //@Override
	public:
		DexteritySlim(){};
		void dextrity() override{
                cout<<"This Dexterity innate abilities has Slim Characteristics."<<endl;
        }

};
class DexteritySneaky : public IDextrityCharacter{

        //@Override
	public: 
		void dextrity() override{
                cout<<"This Dexterity innate abilities has Sneaky Characteristics."<<endl;
        }

};



