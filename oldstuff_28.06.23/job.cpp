#include <list>
#include <iostream>
using namespace std;
class Task{
	public:
	const char* name;
	int prio;
};
int main(){

list<Task> job;
job.push_back(Task{,});

cout<<job.begin()->name<<endl;
return 0;
}
