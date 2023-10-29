// ConcreteBuilder.hpp
#pragma once

#include "Builder.hpp"

class ConcreteBuilder : public Builder {
public:
    ConcreteBuilder();
    void buildPartA() override;
    void buildPartB() override;
    void buildPartC() override;
    Product* getResult() override;

private:
    Product* product;
};
