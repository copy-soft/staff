#include <string>
class Item{
	public:
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
	std::string GetName()const override {return name;}
	int GetDamage() const {return damage;}
	protected:
	int damage;


};
class MagicWeapon : public Weapon{
	public:
	MagicWeapon(std::string n, int d, int md): Weapon(n, d), magic_damage(md){};
	int GetDamage() const {return damage+magic_damage;};
	protected:
	int magic_damage;

};




