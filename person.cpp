#include <string>
#include <type_traits>
#include <iostream>
using namespace std;
struct Person{
	string _name;
	public:
	explicit Person(const string& name):_name{name}{}
	//Person(Person& p):_name{p._name}{}
	//template<typename T> Person(T&& nam){_name=nam;};
	//string _name;
	friend std::ostream& operator << (std::ostream & strm, const Person& p){
	return strm << p._name << endl;
	}
};
int main(){

Person p1("Bjarne");
string name="Herb";
Person p2(name);

Person p3(p1);
cout<< Person{std::move(p2)};//<<endl;
cout<< p2<<endl;
return 0;
}
