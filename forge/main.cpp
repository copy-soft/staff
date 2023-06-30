#include <iostream>
#include "item.h"
int main(){
ConcreteArmor weapon1("базовый меч", 3);
std::cout<<weapon1.GetName()<< " повреждение: "<< weapon1.GetDamageRes()<<std::endl;

//ConcreteArmor()

//MagicWeapon weapon2("магический меч", 3, 2);
//std::cout<<weapon2.GetName()<< " повреждение: "<< weapon2.GetDamage()<<std::endl;

Magic magic_weapon1(&weapon1, 2);
//Magic magic_weapon2(&weapon2, 2);
//Weapon weap1("test",1);

magic_weapon1.SetName("Армагеддон");
std::cout<<magic_weapon1.GetName()<< " повреждение: "<< weapon1.GetDamageRes()+magic_weapon1.GetMagicMod()<<std::endl;
//std::cout<<x2_magic_weapon1.GetName()<< " повреждение: "<< weapon1.GetDamage()+magic_weapon1.GetMagicMod()<<std::endl;


}
