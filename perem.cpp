#include <iostream>
using namespace std;
int i{5};
int j = 5;
int k;
int* l {new int(6)};
int *p;
int main(){
                cout<< i <<endl;
                cout << j <<endl;
                cout<< k << "\n";
                k=5;
                cout << k << endl;
                cout << l <<endl;
                cout << *l <<endl;
return 0;
}
