// RefinedAbstraction.cpp
#include "RefinedAbstraction.h"
#include <iostream>

RefinedAbstraction::RefinedAbstraction(Implementor* implementor) : Abstraction(implementor) {}

void RefinedAbstraction::operation() const {
    std::cout << "RefinedAbstraction operation" << std::endl;
    implementor->operationImpl();
}
