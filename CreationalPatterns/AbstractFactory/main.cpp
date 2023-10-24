// main.cpp
#include "ConcreteFactory1.hpp"
#include "ConcreteFactory2.hpp"

int main() {
    AbstractFactory* factory1 = new ConcreteFactory1();
    ProductA* productA1 = factory1->createProductA();
    ProductB* productB1 = factory1->createProductB();
    productA1->description();
    productB1->description();

    AbstractFactory* factory2 = new ConcreteFactory2();
    ProductA* productA2 = factory2->createProductA();
    ProductB* productB2 = factory2->createProductB();
    productA2->description();
    productB2->description();

    delete factory1;
    delete productA1;
    delete productB1;

    delete factory2;
    delete productA2;
    delete productB2;

    return 0;
}

