#include <iostream>

void func(int x, int &y){

x=x+1;
y=y+1;

}

int main(){

int a=5,b=5;

std::cout<< a <<" "<< b <<std::endl;
func(a, b);

std::cout<< a <<" "<< b <<std::endl;


return 0;
}
