#include <iostream>
int gcd(int a, int b){

if (b==0) return a;
std::cout<<"a="<<a<<" b="<<b<<std::endl;
if((a-b)<(b/2))return gcd(b,a-b);

}


int main(){

	std::cout<<gcd(33,27)<<std::endl;



return 0;
}
