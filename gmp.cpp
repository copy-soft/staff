#include <iostream>
#include <gmpxx.h>

using namespace std;

int main (void) {
    
	mpf_class a, b, c;

    a = 12347777777777777.779999999999995555;
    b = "-567888888888888.555555555558888882";
    c = a+b;

    cout << "sum of " << a << " and " << b << " is " << c << "\n";
    cout << "absolute value is " << abs(c) << "\n";
    // cin >> a;
    return 0;
}
