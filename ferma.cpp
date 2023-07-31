#include <iostream>
int i;
class Ferma 
{
    	public:
	int operator=(Ferma fm);
	int p;
};

// реализация операторной функции operator=()
int Ferma::operator=(Ferma fm)
{
	return i*p%(fm.p);
}

int main(){
	Ferma prime1{7};
	Ferma prime2{5};
	for(i=0;i<prime1.p;i++){
	int j=prime2=prime1;
	std::cout<< j << std::endl;
	}
return 0;
}
