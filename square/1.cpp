#include <iostream>
class Square{//обьект квадрат
	public:
	Square(){}
	int S;//площадь квадрата
	int P;//периметр квадрата
	int calc_s(int a){S=a*a;return S;}//вычисление площади квадрата
	int calc_p(int a){P=4*a;return P;}//вычисление периметра квадрата
	bool operator == (Square a){//
	if(this->S==a.S)return true;
	else return false;
	}

}i;
int main(){
Square A, B;
A.calc_s(3);
B.calc_s(3);
if(A==B)std::cout<<"квадраты равны"<<std::endl;
else std::cout<<"квадраты не равны"<<std::endl;
return 0;
}
