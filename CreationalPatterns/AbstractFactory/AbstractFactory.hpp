// AbstractFactory.hpp
#pragma once
#include "ProductA.hpp"
#include "ProductB.hpp"

class AbstractFactory {
public:
    virtual ProductA* createProductA() = 0;
    virtual ProductB* createProductB() = 0;
};
