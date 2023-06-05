#ifndef concr2
#define concr2
#include <iostream>
#include "abs2.h"
struct ConcreteClass2 : AbstractClass2 {
        void Method(){std::cout<<"do something.\n";};
};
#endif 
