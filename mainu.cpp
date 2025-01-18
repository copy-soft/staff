#include <map>
#include <vector>
#include <stack>
#include <iostream>
//#include "math.h"
//int _main();
class Юбка{
public:
Юбка(char *x){материал=x;};
char *мат(){return материал;};
private:
char *материал;
};

auto main() -> int {


Юбка юбка = Юбка("ткань");

std::cout<<юбка.мат()<<std::endl;

return 0;

}
