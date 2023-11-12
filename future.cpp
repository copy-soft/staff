#include <iostream>
#include <fstream>
#include <future>
using namespace std;
int main(){
	auto future = std::async([]{return "LazyOrEager";});
	cout<<future.get();

   return 0;
}
