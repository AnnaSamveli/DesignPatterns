// ConcreteFactory2.hpp
#pragma once
#include "AbstractFactory.hpp"

class ConcreteFactory2 : public AbstractFactory {
public:
    ProductA* createProductA() override;
    ProductB* createProductB() override;
};
