// ConcreteImplementorB.h
#pragma once

#include "Implementor.h"

class ConcreteImplementorB : public Implementor {
public:
    void operationImpl() const override;
};
