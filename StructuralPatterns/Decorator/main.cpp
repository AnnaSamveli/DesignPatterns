// main.cpp
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main() {
    // Creating a base component
    Component* component = new ConcreteComponent();

    // Decorating the component with ConcreteDecoratorA
    ConcreteDecoratorA* decoratorA = new ConcreteDecoratorA(component);
    decoratorA->operation();

    std::cout << "---------------------" << std::endl;

    // Decorating the component with ConcreteDecoratorB
    ConcreteDecoratorB* decoratorB = new ConcreteDecoratorB(component);
    decoratorB->operation();

    std::cout << "---------------------" << std::endl;

    // Decorating the component with both ConcreteDecoratorA and ConcreteDecoratorB
    ConcreteDecoratorA* decoratedAB = new ConcreteDecoratorA(decoratorB);
    decoratedAB->operation();

    // Clean up
    delete component;
    delete decoratorA;
    delete decoratorB;
    delete decoratedAB;

    return 0;
}

