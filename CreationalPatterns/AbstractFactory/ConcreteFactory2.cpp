// ConcreteFactory2.cpp
#include "ConcreteFactory2.hpp"
#include "ProductA2.hpp"
#include "ProductB2.hpp"

ProductA* ConcreteFactory2::createProductA() {
    return new ProductA2();
}

ProductB* ConcreteFactory2::createProductB() {
    return new ProductB2();
}
