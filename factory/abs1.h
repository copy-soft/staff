#ifndef abs1
#define abs1
#include <memory>
#include "abs2.h"
struct AbstractClass1{virtual std::shared_ptr<AbstractClass2> Create()=0;};
#endif abs1
