#include <iostream>
#include <iomanip>
int main(){
int a[5]={0}, *p;
p=&a[0];
std::cout<<"элемент"<<std::setw(13)<<"\tзначение"<<std::endl;
for (int i=0;i<5;i++)
std::cout<<std::setw(4)<<p+i<< std::setw(8)<<a[i]<<std::endl;




return 0;
}
