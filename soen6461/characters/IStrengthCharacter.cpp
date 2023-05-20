#include <iostream>
using namespace std;

class IStrengthCharacter {
	public: void strength();
};

class StrengthBurly : public IStrengthCharacter {

        //@Override
	public: void strength() {
                cout<<"This Strength innate abilities has Burly Characteristics.";
        }

};

class StrengthFit : public IStrengthCharacter {

        //@Override
	public: void strength() {
                cout<<"This Strength innate abilities has Fit Characteristics.";
        }

};


class StrengthPlump : public IStrengthCharacter {

        //@Override
	public: void strength() {
                cout<<"This Strength innate abilities has Plump Characteristics.";
        }

};
class StrengthScrawny : public IStrengthCharacter {

        //@Override
	public: void strength() {
                cout<<"This Strength innate abilities has Scrawny Characteristics.";
        }

};

int main(){}
