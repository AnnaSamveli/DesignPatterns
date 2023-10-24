// main.cpp
#include "ConcretePrototype.hpp"

int main() {
    ConcretePrototype* original = new ConcretePrototype(42);

    // Clone the original object
    ConcretePrototype* clone = dynamic_cast<ConcretePrototype*>(original->clone());

    // Original and clone have the same data, but are distinct objects
    original->print();
    clone->print();

    delete original;
    delete clone;

    return 0;
}
