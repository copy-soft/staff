#include <iostream>
class Base    // базовый класс
{
public:
    Base() { }
    Base(int input) {std::cout<< "base"<<input<<std::endl;}
};

class Derived : public Base  // производный класс
{
public:
    Derived() : Base () { }  // конструктор производного класса вызывает конструктор базового

    Derived(int inputD) : Base(inputD) {std::cout<<"derived"<< inputD<<std::endl; } // inputD передается в конструктор с параметром класса Base
};

int main()
{
    Base base(3);     // объект базового класса
    Derived der(4);   // объект производного класса
}
