// ConcreteBuilder.cpp
#include "ConcreteBuilder.hpp"

ConcreteBuilder::ConcreteBuilder() {
    product = new Product();
}

void ConcreteBuilder::buildPartA() {
    product->setPartA("Part A");
}

void ConcreteBuilder::buildPartB() {
    product->setPartB("Part B");
}

void ConcreteBuilder::buildPartC() {
    product->setPartC("Part C");
}

Product* ConcreteBuilder::getResult() {
    return product;
}
