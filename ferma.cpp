#include <iostream>
class Ferma 
{
    	public:
	int operator=(Ferma fm);
	int p;
};

// реализация операторной функции operator=()
int Ferma::operator=(Ferma fm)
{
	return p%(fm.p);
}

int main(){
	Ferma prime1{7};
	Ferma prime2{5};
	for(int i=0;i<prime2.p;i++){
	int j=prime1=prime2;
	std::cout<< j << std::endl;
	}
return 0;
}
