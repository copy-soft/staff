#include <iostream>
using namespace std;
//#define derived static_cast<T*>(this)

//template<class T> // CRTP
class MyClass0{
	public:
	MyClass0(){};
MyClass0(const MyClass0* j){};

};

class MyClass1:public MyClass0
{
public:
  	const char* data;
	MyClass0 o;
   MyClass1(MyClass0* ob, const char* i):data(i), o(ob)
  {
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
	MyClass2(MyClass0* ob, const char* j):MyClass1(ob, j){


	}  
void init2()
  {
    cout<<data<<endl;
  }
};
class MyClass3 : public MyClass1//<MyClass2>
{
public:
        MyClass3(MyClass0* ob, const char* j):MyClass1(ob, j){


        }  
void init3()
  {
    cout<<data<<endl;
  }
};

int main()
{
	MyClass0* obj0= new MyClass0();
  MyClass2* obj2 = new MyClass2(obj0, "test");
  MyClass3* obj3 = new MyClass3(obj2, "test2");
  obj2->init2();  
  obj3->init3();
  return 0;
}
