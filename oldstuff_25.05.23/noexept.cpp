#include <stdexcept>
int Foo() noexcept
{
    throw std::runtime_error("error");
    return 0;
}
int main (){

Foo();


}
