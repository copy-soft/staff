#include <iostream>
using namespace std;
class IConstitutionCharacter {
	public:
	IConstitutionCharacter(){};
	void constitution();
};
class ConstitutionFrail : public IConstitutionCharacter{

        //@Override
	public:
		void constitution() {
                cout<<"This Constitution innate abilities has Frail Characteristics.";
        }

};
class ConstitutionHealthy : public IConstitutionCharacter{

        //@Override
	public:
		void constitution() {
                cout<<"This Constitution innate abilities has Healthy Characteristics.";
        }

};

class ConstitutionSick : public IConstitutionCharacter{

        //@Override
	public:
		void constitution() {
                cout<<"This Constitution innate abilities has Sick Characteristics.";
        }

};

class ConstitutionStrong : public IConstitutionCharacter{

        //@Override
	public:
		ConstitutionStrong(){constitution();};
		void constitution() {
                cout<<"This Constitution innate abilities has Strong Characteristics.";
        }

};



int main(){
IConstitutionCharacter* constitutionCharacter = new ConstitutionStrong();
return 0;
}
