#include <iostream>
int gcd(int a, int b){

if (b==0) return a;
std::cout<<"a="<<a<<" b="<<b<<std::endl;
int c = a/b;
return gcd(b,a-b*c);

}


int main(){

	std::cout<<gcd(33,27)<<std::endl;



return 0;
}
