#include <iostream>
#include <memory>
using namespace std;
class A{
	public:
	A(){cout<<"Constructor"<<endl;}
	~A(){cout<<"Destructor"<<endl;}
};



int main(){


	std::shared_ptr<A>shPtr1 = std::make_shared<A>();
	std::cout << shPtr1.use_count() << std::endl;
	std::shared_ptr<A>shPtr2 = shPtr1;
        std::cout << shPtr1.use_count() << std::endl;
        std::cout << shPtr1.use_count() << std::endl;

return 0;
}
