#include <iostream>
using namespace std;
class IDextrityCharacter {
	public: 
		void dextrity();
};


class DexterityAwkward : public  IDextrityCharacter{

        //@Override
	public: 
		void dextrity() {
                cout<<"This Dexterity innate abilities has Awkward Characteristics.";
        }

};

class DexterityClumsy : public IDextrityCharacter{

        //@Override
	public: 
		void dextrity() {
                cout<<"This Dexterity innate abilities has Clumsy Characteristics.";
        }

};

class DexteritySlim : public IDextrityCharacter{

        //@Override
	public:
		DexteritySlim(){dextrity();};
		void dextrity() {
                cout<<"This Dexterity innate abilities has Slim Characteristics.";
        }

};
class DexteritySneaky : public IDextrityCharacter{

        //@Override
	public: 
		void dextrity() {
                cout<<("This Dexterity innate abilities has Sneaky Characteristics.");
        }

};
int main(){
IDextrityCharacter* dexterityCharacter = new DexteritySlim();
return 0;
}



