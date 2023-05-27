#include <iostream>
using namespace std;
//#define derived static_cast<T*>(this)

class MyClass{
	public:
void init2(){cout<<"init2 output"<<endl;};
virtual void init3(){};
};


//template<class T> // CRTP
class MyClass0:public MyClass{
	public:
	//	const char* data;
	MyClass0(){};
MyClass0(const MyClass0* j){};

};
class My: public MyClass0{

        public: My(MyClass0* f){};
		My(){};
void init2(){};
void init3(){};



};








template<class T>
class MyClass1:public MyClass0
{
public:
  	//const char* data;
	MyClass0* o;
   	MyClass1(){};
	MyClass1(MyClass0* ob)//:o((T*)ob)//, const char* i)//:data(i)//, o(ob)
  {
     o = (T*)ob;
  }
};

class MyClass2 : public MyClass1<MyClass2>
{
public:
	const char* data;
	MyClass2(MyClass0* ob, const char* j):MyClass1(ob), data(j){


	}  
void init2()
  {
    cout<<data<<endl;
  }
};
class MyClass3 : public MyClass1<MyClass3>
{
public:
	const char* data;
        MyClass3(MyClass0* ob, const char* j):MyClass1(ob), data(j){


        }  
void init2()
  {
    (o)->init2();
  }


void init3() override
  {
    cout<<data<<endl;
  }
};

class MyClass4 : public MyClass1<MyClass4>
{
public:
        const char* data;
        MyClass4(MyClass0* ob, const char* j):MyClass1(ob), data(j){


        }  
void init2()
  {
    (o)->init2();
  }


void init3() override 
  {
    o->init3();
  }
void init4(){

	cout<<data<<endl;


}
};




int main()
{
	My* obj0= new My();
  MyClass2* obj2 = new MyClass2(obj0, "test2");
  MyClass3* obj3 = new MyClass3(obj2, "test3");
  MyClass4* obj4 = new MyClass4(obj3, "test4");
  //obj2->init2();  
  //obj3->init3();
  //obj3->init2();
  obj4->init2();
  obj4->init3();
  return 0;
}
