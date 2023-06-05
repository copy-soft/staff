#include <iostream>
class Big{
	public:
	Big(int v):V(v){};
	int GetV(){return V;};
	void ShowV(){std::cout<<GetV()<<std::endl;};
	private:
	int V;
	int l;
};

int main (){
Big big(3);
big.ShowV();

return 0;
}
