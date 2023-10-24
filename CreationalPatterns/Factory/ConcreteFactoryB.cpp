// ConcreteFactoryB.cpp
#include "ConcreteFactoryB.hpp"
#include "ProductB.hpp"

Product* ConcreteFactoryB::createProduct() {
    return new ProductB();
}

