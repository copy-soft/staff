#include <iostream>
//#include <accerts>
class A{
public:
virtual char *get()=0;//{return priv;}
//char *get1(){return pub;}
public:
char *pub="pub";
protected:
char *pro="pro";
private:
char *priv="priv";
};


class B: virtual  public  A{
public:
char *get()override {return pro;}
void messpub(){
std::cout<<pro<<std::endl;
}

void messpro(){
//std::cout<<pro<<std::endl;
}
void messpriv(){
//std::cout<<priv<<std::endl;
}
};

class C: virtual private A{
protected:
char *get() override{
return pro;
//std::cout<<pro<<std::endl;
}

void messpro(){
//std::cout<<pro<<std::endl;
}
void messpriv(){
//std::cout<<v<<std::endl;
}
};
int main(void){

B b;
C c;
std::cout<<b.get()<<std::endl;
std::cout<<c.get()<<std::endl;
//accert(c.get());
//b.messpub();

}
