#include <iostream>

class Square{
	public:
	Square(){}
	int S;
	int P;
	int calc_s(int a){S=a*a;return S;}
	int calc_p(int a){P=4*a;return P;}
}i;
int main(){
Square A;
A.calc_s(3);
std::cout<<A.S<<std::endl;

return 0;
}
