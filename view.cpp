#include <iostream>
class A{
public:
char *pub="pub";
protected:
char *pro="pro";
private:
char *priv="priv";
};


class B: public A{
public:
void messpub(){
std::cout<<pub<<std::endl;
}
void messpro(){
std::cout<<pro<<std::endl;
}
void messpriv(){
std::cout<<priv<<std::endl;
}
};


int main(void){

B b;

b.messpub();
b.messpro();
b.messpriv();

}
