#include <vector>
#include <variant>
#include <string>
#include <iostream>
int main(){
using var_t = std::variant<int, long, double, std::string>;

   std::vector<var_t> vec = {10, 15l, 1.5, "hello"};
    for(auto& v: vec)
 
        // 1. void visitor, only called for side-effects (here, for I/O)
        std::visit([](auto&& arg){std::cout << arg<<std::endl;}, v);


}
