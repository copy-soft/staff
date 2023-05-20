#include <iostream>
using namespace std;

class IStrengthCharacter {
	public: virtual void strength()=0;
};

class StrengthBurly : public IStrengthCharacter {

        //@Override
	public: void strength() override{
                cout<<"This Strength innate abilities has Burly Characteristics."<<endl;
        }

};

class StrengthFit : public IStrengthCharacter {

        //@Override
	public: void strength() override{
                cout<<"This Strength innate abilities has Fit Characteristics."<<endl;
        }

};


class StrengthPlump : public IStrengthCharacter {

        //@Override
	public: void strength() override{
                cout<<"This Strength innate abilities has Plump Characteristics."<<endl;
        }

};
class StrengthScrawny : public IStrengthCharacter {

        //@Override
	public: void strength() override{
                cout<<"This Strength innate abilities has Scrawny Characteristics."<<endl;
        }

};

