// ConcreteFactory1.hpp
#pragma once
#include "AbstractFactory.hpp"

class ConcreteFactory1 : public AbstractFactory {
public:
    ProductA* createProductA() override;
    ProductB* createProductB() override;
};
