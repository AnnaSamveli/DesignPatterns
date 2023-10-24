// ConcreteFactoryA.cpp
#include "ConcreteFactoryA.hpp"
#include "ProductA.hpp"

Product* ConcreteFactoryA::createProduct() {
    return new ProductA();
}
