// ConcreteImplementorA.h
#pragma once

#include "Implementor.h"

class ConcreteImplementorA : public Implementor {
public:
    void operationImpl() const override;
};
