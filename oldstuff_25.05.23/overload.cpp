#include <string>
#include <iostream>
class Fun{
	public:
	Fun(){
	std::cout<<"ref"<<std::endl;
	}
};
/*
void Fun(const int& i){
	std::cout<<"const ref"<<std::endl;
}
void Fun(int&& i){
	std::cout<<"moveref"<<std::endl;
}
*/
int main(){
int i=3;
//Fun Fun;
Fun x = Fun();
//	std::cout<<x<<std::endl;
return 0;
}
