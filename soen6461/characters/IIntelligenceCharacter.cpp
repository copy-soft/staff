#include <iostream>
using namespace std;
class IIntelligenceCharacter {
	public: 
		void intelligence();
};

class IntelligenceForgetful : public IIntelligenceCharacter{

        //@Override
	public: void intelligence() {
                cout<<"This Intelligence innate abilities has Forgetful Characteristics.";
        }

};

class IntelligenceInquisitive : public IIntelligenceCharacter{

        //@Override
	public: void intelligence() {
                cout<<"This Intelligence innate abilities has Inquisitive Characteristics.";
        }

};

class IntelligenceSimple :public IIntelligenceCharacter{

        //@Override
	public: void intelligence() {
                cout<<"This Intelligence innate abilities has Simple Characteristics.";
        }

};

class IntelligenceStudious : public IIntelligenceCharacter{

        //@Override
	public: void intelligence() {
                cout<<"This Intelligence innate abilities has Studious Characteristics.";
        }

};

int main(){}

