#include <map>
#include <vector>
#include <stack>
#include <iostream>
//#include "math.h"
//int _main();
class Шуруп{
public:
Шуруп(char *x){материал=x;};
char *мат(){return материал;};
private:
char *материал;
};

auto main() -> int {


Шуруп шуруп = Шуруп("сталь");


std::cout<<шуруп.мат()<<std::endl;

return 0;

}
