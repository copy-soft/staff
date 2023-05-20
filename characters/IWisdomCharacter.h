#include <iostream>
using namespace std;
class IWisdomCharacter {
	public: void wisdom();
};

class WisdomEmpathy : public IWisdomCharacter{

        //@Override
	public: void wisdom() {
                cout<<"This Wisdom innate abilities has Empathy Characteristics.";
        }

};

class WisdomFoolish : public IWisdomCharacter{

        //@Override
	public: void wisdom() {
                cout<<"This Wisdom innate abilities has Foolish Characteristics.";
        }

};
class WisdomGoodJudgement : public IWisdomCharacter{

        //@Override
	public: void wisdom() {
                cout<<"This Wisdom innate abilities has Good Judgement Characteristics.";
        }

};

class WisdomOblivious : public IWisdomCharacter{

        //@Override
	public: void wisdom() {
                cout<<"This Wisdom innate abilities has Oblivious Characteristics.";
        }

};




