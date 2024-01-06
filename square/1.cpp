#include <iostream>

class Square{
	public:
	Square(){}
	int S;
	int P;
	int calc_s(int a){S=a*a;return S;}
	int calc_p(int a){P=4*a;return P;}
	bool operator == (Square a){
	return true;
	}

}i;
int main(){
Square A, B;
A.calc_s(3);
if(A==B)std::cout<<A.S<<std::endl;

return 0;
}
