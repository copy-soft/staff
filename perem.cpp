#include <iostream>
using namespace std;
class MyClass{};
class MyClass1{
	public:
	char* data;
};
int main(){
MyClass myclass;
MyClass1 myclass1;
myclass1.data="return from class member";
cout<<myclass1.data<<endl;
return 0;
}
