// Factory.h
#pragma once
#include "Product.hpp"

class Factory {
public:
    virtual Product* createProduct() = 0;
};

