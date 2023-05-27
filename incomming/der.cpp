#include <iostream>
using namespace std;
//#define derived static_cast<T*>(this)

//template<class T> // CRTP
class MyClass0{
	public:
	MyClass0(){};
MyClass0(const MyClass0* j){};

};
template<class T>
class MyClass1:public MyClass0
{
public:
  	const char* data;
	T* o;
   MyClass1(MyClass0* ob, const char* i):data(i)//, o(ob)
  {
     o = static_cast<T*>(ob);
  }
  void init()
  {
    printf("MyClass1 init\n");
  }
};

class MyClass2 : public MyClass1<MyClass2>
{
public:
	MyClass2(MyClass0* ob, const char* j):MyClass1(ob, j){


	}  
void init2()
  {
    cout<<data<<endl;
  }
};
class MyClass3 : public MyClass1<MyClass3>
{
public:
        MyClass3(MyClass0* ob, const char* j):MyClass1(ob, j){


        }  
void init2()
  {
    cout<<(o)->data<<endl;
  }


void init3()
  {
    cout<<data<<endl;
  }
};

int main()
{
	MyClass0* obj0= new MyClass0();
  MyClass2* obj2 = new MyClass2(obj0, "test2");
  MyClass3* obj3 = new MyClass3(obj2, "test3");
  obj2->init2();  
  obj3->init3();
  obj3->init2();
  return 0;
}
