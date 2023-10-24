// ConcretePrototype.hpp
#pragma once
#include "Prototype.hpp"

class ConcretePrototype : public Prototype {
public:
    ConcretePrototype(int data);
    Prototype* clone() const override;
    void print() const override;

private:
    int data;
};
