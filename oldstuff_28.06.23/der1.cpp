#include <stdio.h>
#include <iostream>
//#define derived static_cast<T*>(this)

template<class T> // CRTP
class MyClass1
{
public:
  const char* data;

MyClass1(const char* d):data(d)
  {
    static_cast<T*>(this)->init();
  }
  void init()
  {
    printf("MyClass1 init\n");
    //std::cout<<data<<std::endl;
  }
};

class MyClass2 : public MyClass1<MyClass2>
{
public:
  MyClass2(const char* j):MyClass1(j){}

   void init()
  {
    printf("MyClass2 init\n");
      std::cout<<data<<std::endl;
  }
};

int main()
{
	MyClass2 obj2("Output from derived class");// = new MyClass2();
  return 0;
}
