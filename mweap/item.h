#include <string>
class Item{
	public:
	Item()=default;
	virtual ~Item()=default;
	virtual std::string GetName()const = 0 ;
	virtual void SetName(const std::string& new_name){name= new_name;};
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
        return "броня";
auto* the_cast_to_weapon = dynamic_cast<ConcreteWeapon*>(item);
if (the_cast_to_weapon)
	return "оружие";

        return "неизвестно";
}



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
	virtual void SetName(const std::string& new_name) override {
		item_->SetName(new_name);
	}
	virtual std::string GetName() const override{
		std::string namestring = item_->GetName();
		namestring+=" | магическое ";
		if (magic_modifier_!=0)
			namestring+=(magic_modifier_<0) ? "-" : "+";
		namestring+=std::to_string(magic_modifier_)+" ";
		namestring+= GetItemTypeString();
	return namestring;
	}
	std::string GetItemTypeString() const {
		return WhatIsItemTypeString(item_);
	};
        int GetMagicMod(){return magic_modifier_;}
	protected:
        Item* item_;
        int magic_modifier_;

};

