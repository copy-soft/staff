#include <iostream>
template<class T>
struct OpNewCreator
{
	OpNewCreator(){

	std::cout<<Create()<<std::end;
	}
     static T* Create()
	{
		return new T(8);
	}

};
struct OpNewCreator<int> type;
int main(){

}
