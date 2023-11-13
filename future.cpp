#include <iostream>
#include <fstream>
#include <future>
#include <chrono>
#include <thread>
using namespace std;
//! sleeps for one second and returns 1
auto sleep = [](){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 1;
};
int main(){
	std::packaged_task<int()> task(sleep);

	auto f = task.get_future();
	task(); // invoke the function

	// You have to wait until task returns. Since task calls sleep
	// you will have to wait at least 1 second.
	std::cout << "You can see this after 1 second\n";

	// However, f.get() will be available, since task has already finished.
	std::cout << f.get() << std::endl;



	auto future = std::async([]{return "LazyOrEager";});
	cout<<future.get()<<std::endl;

   return 0;
}
