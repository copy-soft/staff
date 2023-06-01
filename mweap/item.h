#include <string>
class Item{
	public:
	Item()=default;
	virtual ~Item()=default;
	virtual std::string GetName()const = 0 ;
	private:
	protected:
	Item(std::string n):name(n){}
	std::string name;

};
class Weapon:public Item{
	public:
	Weapon(std::string n, int d):Item(n),damage(d){}
	virtual std::string GetName()const override {return name;}
	virtual int GetDamage() const {return damage;}
	protected:
	int damage;


};

class MagicWeapon : public Weapon{
	public:
	MagicWeapon(std::string n, int d, int md): Weapon(n, d), magic_damage(md){};
	virtual int GetDamage() const {return damage+magic_damage;};
	protected:
	int magic_damage;

};


class ConcreteWeapon : public Item{
        public:
        ConcreteWeapon(std::string n, int d): Item(n), damage(d){};
        virtual std::string GetName()const override {return name;}
        virtual int GetDamage() const {return damage;};
        protected:
        int damage;

};



class ConcreteArmor : public Item{
        public:
        ConcreteArmor(std::string n, int dr): Item(n), damage_res(dr){};
        virtual std::string GetName()const override {return name;}
        virtual int GetDamageRes() const {return damage_res;};
        protected:
        int damage_res;

};

enum ITEMTYPE {UNKNOWN, ARMOR, WEAPON};
ITEMTYPE WhatIsItemType(Item* item){

auto* the_cast_to_armor = dynamic_cast<ConcreteArmor*>(item);
if (the_cast_to_armor)
	return ITEMTYPE::ARMOR;
auto* the_cast_to_weapon = dynamic_cast<ConcreteWeapon*>(item);
if (the_cast_to_weapon)
	return ITEMTYPE::WEAPON;

	return ITEMTYPE::UNKNOWN;
}
std::string WhatIsItemTypeString(Item* item){

auto* the_cast_to_armor = dynamic_cast<ConcreteArmor*>(item);
if (the_cast_to_armor)
        return "ARMOR";
auto* the_cast_to_weapon = dynamic_cast<ConcreteWeapon*>(item);
if (the_cast_to_weapon)
	return "WEAPON";

        return "UNKNOWN";
}








/*
std::string WhatIsItemTypeString(Item* item){
auto* this_item_type;
        switch(this_item_type){
                case ITEMTYPE::ARMOR:
                return "Armor";
                break;
                case ITEMTYPE::WEAPON:
                return "Weapon";
                break;
                case ITEMTYPE::UNKNOWN:
                break "Unknown";
                case default:
                return "Unhandled";
                break;
        }
        };
*/


class Magic : public Item{
        public:
        Magic(Item* item, int mod): item_(item), magic_modifier_(mod){};
        //int GetDamage() const {return damage+magic_damage;};
        protected:
	Item* item_;
        int magic_modifier_;

};

class MagicDecorator : public Item{
        public:
        MagicDecorator(Item* item, int mod): item_(item), magic_modifier_(mod){
	}
	std::string GetName() const{return WhatIsItemTypeString(item_);}
        //int GetDamage() const {return damage+magic_damage;};
        int GetMagicMod(){return magic_modifier_;}
	protected:
        Item* item_;
        int magic_modifier_;

};

