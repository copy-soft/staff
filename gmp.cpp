#include <iostream>
#include <iomanip>
#include <gmpxx.h>

using namespace std;

int main (void) {
    
	mpf_class a,c ;
	unsigned long int b;
	//mpf_t c;
	//mpf_set_default_prec(100000);
    //mpf_init(c);
    a = 12.3;
    b = 12;
    mpf_pow_ui(c.get_mpf_t(), a.get_mpf_t(), b);
    gmp_printf("c = %.50Ff\n", c);

    //cout << setprecision(40);
    //cout << "sum of " << a.get_d() << " and " << b << " is " << c.get_d() << "\n";
    //cout << "absolute value is " << abs(c) << "\n";
    // cin >> a;
    //cout <<
    //cout <<6629162717921697/536870912<<endl;
    return 0;
}
