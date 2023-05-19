#include <string>
#include <iostream>
class A{
	public:
	A(std::string n):name(n){}
	std::string name="miki";

};

int main(){

A a("mik");
std::cout<<a.name<<std::endl;


return 0;
}
