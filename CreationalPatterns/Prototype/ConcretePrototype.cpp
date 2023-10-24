// ConcretePrototype.cpp
#include "ConcretePrototype.hpp"
#include <iostream>

ConcretePrototype::ConcretePrototype(int data) : data(data) {}

Prototype* ConcretePrototype::clone() const {
    return new ConcretePrototype(data); // Shallow copy
}

void ConcretePrototype::print() const {
    std::cout << "Data: " << data << std::endl;
}
