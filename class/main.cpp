#include <iostream>
#include <string>
using namespace std;
class Big{
	public:
	Big();
	Big(string V):_V(V){};
	string GetV(){return _V;};
	void ShowV(){std::cout<<GetV()<<std::endl;};
	private:
	string _V;
};

int main (){
Big big("big");
big.ShowV();

return 0;
}
