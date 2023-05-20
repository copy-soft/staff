#include <string>
#include <iostream>
using namespace std;
class ICharismaCharacter {
	public:
	ICharismaCharacter(){};
	string charisma();
};


class CharismaTimid : ICharismaCharacter{

  //      @Override
	public: 
		string charisma() {
                cout<<"This Charisma innate abilities has Timid Characteristics."<<endl;
                return "This Charisma innate abilities has Timid Characteristics.";
        }
        
};





class CharismaLeadership : public ICharismaCharacter{

    //    @Override
	public:
		CharismaLeadership(){
		charisma();};
		string charisma() {
                cout<<"This Charisma innate abilities has Leadership Characteristics."<<endl;
                return "This Charisma innate abilities has Leadership Characteristics.";
        }
        
};




class CharismaConfidence : ICharismaCharacter {

        //@Override
	public: 
		string charisma() {
                cout<<"This Charisma innate abilities has Confidence Characteristics."<<endl;
                return "This Charisma innate abilities has Confidence Characteristics.";
        }
};





class CharismaAwkward : ICharismaCharacter{

        //@Override
	public: 
		string charisma() {
                cout<<"This Charisma innate abilities has Awkward Characteristics."<<endl;
                return "This Charisma innate abilities has Awkward Characteristics.";
        }
        
};
int main(){
ICharismaCharacter* charismaCharacter = new CharismaLeadership();
return 0;
}
