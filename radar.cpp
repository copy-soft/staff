#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main(){

while(1){


cout<<"distance "<<101<<endl;

std::this_thread::sleep_for(std::chrono::milliseconds(1000));


}


return 0;
}
