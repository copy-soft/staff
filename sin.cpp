#include <iostream>
#include <cmath>
#include <numbers> // std::numbers

int main(){


std::cout<<sin(std::numbers::pi/2)<<std::endl;
std::cout<<sin(0.5)<<std::endl;
std::cout<<sin(1)-sin(0.5)<<std::endl;
//std::cout << "double      " << std::numbers::pi << std::endl;


return 0;

}
