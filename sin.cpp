#include <iostream>
#include <cmath>
#include <numbers> // std::numbers

int main(){


std::cout<<sin(std::numbers::pi/3)<<std::endl;
std::cout<<sin(std::numbers::pi/6)<<std::endl;
std::cout<<sin(std::numbers::pi/3)-sin(std::numbers::pi/6)<<std::endl;
//std::cout << "double      " << std::numbers::pi << std::endl;


return 0;

}
