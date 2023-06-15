#include <iostream>
#include "D20Character.hpp"

using namespace std;
using namespace D20Rules;

int main()
{
	D20Character c;
	//c.Abilities.Wisdom.setScore(13);
	cout<<c.SavingThrows.Reflex.getTotal()<<endl;
	//cout<<c.Abilities.Dexterity.getTotal()<<endl;


	//cout<<c.Abilities.Wisdom.getTotal()<<endl;
	cout<<c.SavingThrows.Will.getTotal()<<endl;
	//cout << c.SavingThrows.Will.getTotal()<<endl;
    //cin.get();
    return 0;
}
