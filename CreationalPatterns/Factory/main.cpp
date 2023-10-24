// main.cpp
#include "ConcreteFactoryA.hpp"
#include "ConcreteFactoryB.hpp"

int main() {
    Factory* factoryA = new ConcreteFactoryA();
    Product* productA = factoryA->createProduct();
    productA->description();

    Factory* factoryB = new ConcreteFactoryB();
    Product* productB = factoryB->createProduct();
    productB->description();

    delete factoryA;
    delete productA;
    delete factoryB;
    delete productB;

    return 0;
}
