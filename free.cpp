#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{           int *myPtr;
//myPtr = (int*) calloc(1,sizeof(int));
*myPtr = 10;
int* myPtr2 = (int*)std::calloc(10, sizeof *myPtr);
int *ptr3 = new int;
cout<< "Before executing freeing" <<endl<<endl;;
cout<< "Address for myPtr1= " <<myPtr<<endl;
cout<< "Value for myPtr1= " << *myPtr<<endl<<endl;
cout<< "Address for myPtr2 = " << myPtr2 <<endl;
cout<< "Value for myPtr2= " << *myPtr2 <<endl<<endl;
cout<< "Address for ptr3 = " << myPtr2 <<endl;
cout<< "Value for ptr3= " << *myPtr2 <<endl<<endl;
free(myPtr);
free(myPtr2);
free(ptr3);
cout<< "After executing freeing" <<endl<<endl;;
/* ptr remains same, *ptr changes*/
cout<< "Address for myPtr1 = " <<myPtr<<endl;
cout<< "Value for myPtr1= " << *myPtr<<endl<<endl;
cout<< "Address for myPtr2= " << myPtr2 <<endl;
cout<< "Value for myPtr2= " << *myPtr2 <<endl<<endl;
cout<< "Address for ptr3 = " << myPtr2 <<endl;
cout<< "Value for ptr3= " << *myPtr2 <<endl<<endl;
return 0;
}
