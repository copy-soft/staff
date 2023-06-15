#include "D20Character.hpp"
#include <iostream>
namespace D20Rules
{
    D20Character::D20Character()
    {
		//SavingThrows.Fortitude.iModifier = Abilities.Constitution.iModifier;
	SavingThrows.Reflex.setModifier(Abilities.Dexterity.getModifier());
        SavingThrows.Will.setModifier(Abilities.Wisdom.getModifier());
        
        //ArmorClass.iDexModifier = Abilities.Dexterity.iModifier;
    }
}
