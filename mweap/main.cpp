#include <iostream>
#include "item.h"
int main(){
ConcreteWeapon weapon1("Basic Sword", 3);
//std::cout<<weapon1.GetName()<< " damage: "<< weapon1.GetDamage()<<std::endl;

//MagicWeapon weapon2("Magic Sword", 3, 2);
//std::cout<<weapon2.GetName()<< " damage: "<< weapon2.GetDamage()<<std::endl;

MagicDecorator magic_weapon1(&weapon1, 2);
std::cout<<magic_weapon1.GetName()<< " damage: "<< weapon1.GetDamage()+magic_weapon1.GetMagicMod()<<std::endl;


}
