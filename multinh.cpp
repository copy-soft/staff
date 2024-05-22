#include <iostream>
 
class layer0 
{
public:
    layer0(int num_): num{num_} 
    { 
        //std::cout << "Person created" << std::endl;
    }
    void print() const
    {
        std::cout << "floor " << num << std::endl;
    }
private:
    int num;
};
 
class layer1: public layer0
{
public:
    layer1(int num): layer0{num} {}
};
class layer2: public layer1
{
public:
    layer2(int num): layer1{num} {}
};
// работающий студент
class layer3: public layer2
{
public:
    layer3(int num): layer2{num}{}
};
 
int main()
{
    layer3 bob{4};
    bob.print();
}
