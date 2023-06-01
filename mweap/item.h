#include <string>
class Item{
	public:
	virtual ~Item()=default;
	virtual std::string GetName(){return "";};
	private:
	protected:
	Item(std::string n):name(n){}
	std::string name;

};
class Weapon:public Item{
	public:
	Weapon(std::string n, int d):Item(n),damage(d){}
	std::string GetName()const {return name;}
	int GetDamage() const {return damage;}
	protected:
	int damage;


};
