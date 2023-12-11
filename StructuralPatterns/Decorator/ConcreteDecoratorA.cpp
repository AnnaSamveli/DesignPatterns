// ConcreteDecoratorA.cpp
#include "ConcreteDecoratorA.h"
#include <iostream>

ConcreteDecoratorA::ConcreteDecoratorA(Component* component) : Decorator(component) {}

void ConcreteDecoratorA::operation() const {
    Decorator::operation();
    additionalOperationA();
}

void ConcreteDecoratorA::additionalOperationA() const {
    std::cout << "ConcreteDecoratorA additional operation A" << std::endl;
}
