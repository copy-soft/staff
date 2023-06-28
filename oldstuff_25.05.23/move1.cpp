#include <iostream>
#include <utility>
int func(int& u){int j(u);;auto f=u;u=4;return (std::move(f));}; 

int main()
{
    int* i=new int(5);
    //std::cout<<func()<<std::endl;
    std::cout<<func((std::forward<int&>(*(i))))<<std::endl;
    std::cout<<func(std::forward<int&>(*(i)))<<std::endl;
    delete i;
    return 0;
}
