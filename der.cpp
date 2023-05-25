#include <iostream>
using namespace std;
//#define derived static_cast<T*>(this)

//template<class T> // CRTP
class MyClass1
{
public:
  	const char* data;
   MyClass1(const char* i)
  {
	  data=i;
    //static_cast<T*>(this)->init();
  }
  void init()
  {
    printf("MyClass1 init\n");
  }
};

class MyClass2 : public MyClass1//<MyClass2>
{
public:
	MyClass2(const char* j):MyClass1(j){


	}  
void init()
  {
    cout<<data<<endl;
  }
};

int main()
{
  MyClass2 *obj2 = new MyClass2("test");
	obj2->init();  
  return 0;
}
