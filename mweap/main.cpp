#include <iostream>
#include "item.h"
int main(){
Weapon weapon1("Basic Sword", 3);
std::cout<<weapon1.GetName()<< " damage: "<< weapon1.GetDamage()<<std::endl;


}
