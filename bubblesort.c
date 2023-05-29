#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "logdur.h"


int main() 
{ 
	char* arr;// = {0};
	arr=new char[500000];
	for(int i=0;i<499999;i++)
		arr[i]=rand();

B1:;	int bound(sizeof(arr)/sizeof(arr[0])), n(bound); 
	LogDuration id("bubblesort");{
B2:;	for(;;){
   	int t=0;
   	for (int j = 0; j < bound-1; j++){	   
B3:;	if (arr[j]- arr[j+1]>0){ 
	int temp = arr[j];
	arr[j] = arr[j+1]; 
	arr[j+1] = temp;	
   	t=j;
   	}
   	}
B4:;   	if (t==0)return 0;
   	bound=t+1;
	
   }
}
}	

