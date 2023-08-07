#include <iostream>
#include <cmath>
int main(){

for(double i =-1.6;i<3;i=i+0.2){
//double i = -1;
	std::cout<<"x= "<<i<<" y=";
	double j=(sqrt(pow(i,3)-i));
	std::cout<<j<<std::endl;
}



return 0;
}
