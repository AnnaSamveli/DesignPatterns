// ConcreteFactoryA.h
#pragma once
#include "Factory.hpp"

class ConcreteFactoryA : public Factory {
public:
    Product* createProduct() override;
};

