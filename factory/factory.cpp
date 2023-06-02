#include <iostream>
#include <memory>
#include "abs1.h"
#include "abs1.h"
#include "concr1.h"
#include "concr2.h"

int main(){

	std::shared_ptr<AbstractClass1> class1 = std::make_shared<ConcreteClass1>();
	std::shared_ptr<AbstractClass2> class2 = class1->Create();
	
	class2->Method();

	return 0;
}
