#include <memory>
#include "abs1.h"
#include "abs2.h"
#include "concr2.h"
struct ConcreteClass1 : AbstractClass1 {
        std::shared_ptr<AbstractClass2> Create(){return std::make_shared<ConcreteClass2>();};
};

