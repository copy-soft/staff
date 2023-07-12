#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    //int low_dist  = 1;
    //int high_dist = 6;
    std::cout << std::rand() % ( 6 - 1 ) << std::endl;

    return 0;
}
