// Facade.cpp
#include "Facade.h"

Facade::Facade() {}

void Facade::operation() const {
    subsystemA.operationA();
    subsystemB.operationB();
}
