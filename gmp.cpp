#include <iostream>
#include <iomanip>
#include <gmpxx.h>

using namespace std;

int main (void) {
    
	mpq_class a, b, c;

    a = 12347777.7799995555;
    b = -56788888.5558888882;
    c = a+b;
    cout << setprecision(24);
    cout << "sum of " << a.get_d() << " and " << b << " is " << c << "\n";
    cout << "absolute value is " << abs(c) << "\n";
    // cin >> a;
    //cout <<
    cout <<6629162717921697/536870912<<endl;
    return 0;
}
