// ConcreteFactoryB.h
#pragma once
#include "Factory.hpp"

class ConcreteFactoryB : public Factory {
public:
    Product* createProduct() override;
};

