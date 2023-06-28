#include <string>
#include <iostream>
using namespace std;

class ICharismaCharacter {
	public:
	ICharismaCharacter(){};
	virtual string charisma()=0;
};


class CharismaTimid : public ICharismaCharacter{

  //      @Override
	public: 
		string charisma() override {
                cout<<"This Charisma innate abilities has Timid Characteristics."<<endl;
                return "This Charisma innate abilities has Timid Characteristics.";
        }
        
};





class CharismaLeadership : public ICharismaCharacter{

    //    @Override
	public:
		CharismaLeadership(){};
		string charisma() override{
                cout<<"This Charisma innate abilities has Leadership Characteristics."<<endl;
                return "This Charisma innate abilities has Leadership Characteristics.";
        }
        
};




class CharismaConfidence : public ICharismaCharacter {

        //@Override
	public: 
		string charisma() override{
                cout<<"This Charisma innate abilities has Confidence Characteristics."<<endl;
                return "This Charisma innate abilities has Confidence Characteristics.";
        }
};





class CharismaAwkward : public ICharismaCharacter{

        //@Override
	public: 
		string charisma() override{
                cout<<"This Charisma innate abilities has Awkward Characteristics."<<endl;
                return "This Charisma innate abilities has Awkward Characteristics.";
        }
        
};
