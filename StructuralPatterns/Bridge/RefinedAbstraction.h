// RefinedAbstraction.h
#pragma once

#include "Abstraction.h"

class RefinedAbstraction : public Abstraction {
public:
    RefinedAbstraction(Implementor* implementor);
    void operation() const override;
};
