#include <iostream>
#include <memory>
using namespace std;
class A{
	public:
	A(){cout<<"Constructor"<<endl;}
	~A(){cout<<"Destructor"<<endl;}
};



int main(){


	{
	std::unique_ptr<A>unPtr1 = std::make_unique<A>();
	}
	std::cout <<"---------------------"<<std::endl;
	

	weak_ptr<int>wePtr1;
	{
        std::shared_ptr<int>shPtr1 = std::make_shared<int>(25);
	wePtr1 = shPtr1;
	std::cout<< "wePtr1" <<std::endl;
	}

	{
	//std::unique_ptr<int>unPtr2 = *unPtr1;
	std::shared_ptr<A>shPtr1 = std::make_shared<A>();
	std::cout << shPtr1.use_count() << std::endl;
	{
	std::shared_ptr<A>shPtr2 = shPtr1;
        std::cout << shPtr1.use_count() << std::endl;
	}
        std::cout << shPtr1.use_count() << std::endl;
	}
	//char* g;
	//scanf(g);
//std::cout << *unPtr2 << std::endl;

return 0;
}
