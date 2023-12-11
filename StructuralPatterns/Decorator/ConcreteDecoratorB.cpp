// ConcreteDecoratorB.cpp
#include "ConcreteDecoratorB.h"
#include <iostream>

ConcreteDecoratorB::ConcreteDecoratorB(Component* component) : Decorator(component) {}

void ConcreteDecoratorB::operation() const {
    Decorator::operation();
    additionalOperationB();
}

void ConcreteDecoratorB::additionalOperationB() const {
    std::cout << "ConcreteDecoratorB additional operation B" << std::endl;
}
