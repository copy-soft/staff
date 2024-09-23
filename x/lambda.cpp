#include <iostream>
namespace foo{
	int number(){
	return 1;
	}
}
namespace bar{
	int number(){
	return 3;
	}
}




auto main(int argc, char *argv[])->int {

int result=foo::number()+bar::number();
	
std::cout<<result<<std::endl;


return -(-![]{});

}
