// ConcreteFactory1.cpp
#include "ConcreteFactory1.hpp"
#include "ProductA1.hpp"
#include "ProductB1.hpp"

ProductA* ConcreteFactory1::createProductA() {
    return new ProductA1();
}

ProductB* ConcreteFactory1::createProductB() {
    return new ProductB1();
}
