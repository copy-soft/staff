#include <iostream>
class Ferma 
{
    	public:
	int operator=(Ferma fm);
	int p;
	int i;
};

int Ferma::operator=(Ferma fm)
{
	return i*p%(fm.p);
}
int main(){
	Ferma prime1{7};
	Ferma prime2{5};
	for(prime1.i=0;prime1.i<prime2.p;prime1.i++)std::cout<<((int)(prime1=prime2))<<std::endl;
return 0;
}
