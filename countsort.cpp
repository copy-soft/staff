//#include <stdio.h> 
//#include <stdlib.h>
//#include <time.h>
#include <ctime>
#include <chrono>
#include <iostream>
#include <deque>
//#include "logdur.h"
int main(){ 
	std::deque<int> d;
	//d.push_front(13);
	//d.push_back(25);
	//for (int n : d)
        //std::cout << n << ' ';
	//std::cout << '\n';
	//std::deque<char> chars{'A', 'B', 'C', 'D'};
	//for (; !chars.empty(); chars.pop_front())
        //std::cout << "chars.front(): '" << chars.front() << "'\n";

	//int arr[10] = {0};
        //int n = sizeof(arr)/sizeof(arr[0]); 
        srand(time(NULL));
	for(int i=0;i<10;i++)d.push_back(rand() % 11);

        //LogDuration ld("countsort");
        //{

	//int output[n]; 
C1:;    int count[d.size()]={0};
	int i, j, n=d.size(); 
	//clock_t t1;
C2:;	for(i = n-1;i>=1; --i)
   	for (j=i-1;j>=0;--j){
   	if (d[i]-d[j]>0)
   	{
	++count[i];
	//t1 = clock();
	//printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
	//printf("i=%i j=%i [%i > %i]",i,j, arr[i],arr[j]);
	//for (int k = 0; k < n; ++k)
	//printf(" %i",count[k]); 
	//printf("  inversion count i\n");
	}else{
	++count[j];
	//t1 = clock();
	//printf ("%f ",((double)t1)/CLOCKS_PER_SEC);
	//printf("i=%i j=%i [%i < %i]",i,j, arr[i],arr[j]);
	//for (int k = 0; k < n; ++k)
	//printf(" %i",count[k]);
	//printf("  not inversion count j\n");
	}
	}
	
   	//for (i = 0; i < n; ++i)
	//std::cout<<arr[i]<< " "; 
	//std::cout<<std::endl;	
	//}
	return 0; 
} 
