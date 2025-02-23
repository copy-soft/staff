#include <iostream>
template <class T>
class i_am_class{
public:
enum ee{
	hello
};
void f(){

using ee = i_am_class<T>::ee;
ee e =hello;
std::cout<<e<<std::endl;
}



};

void f(){
i_am_class<int>().f();

}

int main(){

f();
}
