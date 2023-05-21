#include <iostream>
using namespace std;
class IIntelligenceCharacter {
	public: 
	virtual void intelligence()=0;
};

class IntelligenceForgetful : public IIntelligenceCharacter{

        //@Override
	public: void intelligence() override{
                cout<<"This Intelligence innate abilities has Forgetful Characteristics."<<endl;
        }

};

class IntelligenceInquisitive : public IIntelligenceCharacter{

        //@Override
	public: void intelligence() override{
                cout<<"This Intelligence innate abilities has Inquisitive Characteristics."<<endl;
        }

};

class IntelligenceSimple :public IIntelligenceCharacter{

        //@Override
	public: void intelligence() override{
                cout<<"This Intelligence innate abilities has Simple Characteristics."<<endl;
        }

};

class IntelligenceStudious : public IIntelligenceCharacter{

        //@Override
	public: void intelligence() override{
                cout<<"This Intelligence innate abilities has Studious Characteristics."<<endl;
        }

};


