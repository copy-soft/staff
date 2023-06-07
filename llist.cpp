#include <iostream>
#include <vector>
#include <list>
#include "logdur.h"
int main(){

	std::vector<int> v = {7, 5, 16, 8};
 
    	LogDuration id("vector");
	{
     for(int i = 0;i<50000;i++)
	    for(int j = 0;j<1000;j++)
		v.push_back(i+j);
 
    	for (int n : v);
	}
return 0;
}

