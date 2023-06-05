#include <iostream>
#include <string>
class Big{
	public:
	Big();
	Big(std::string v):V(v){};
	std::string GetV(){return V;};
	void ShowV(){std::cout<<GetV()<<std::endl;};
	private:
	std::string V;
};

int main (){
Big big("big");
big.ShowV();

return 0;
}
