// Abstraction.h
#pragma once

#include "Implementor.h"

class Abstraction {
public:
    Abstraction(Implementor* implementor);
    virtual void operation() const = 0;

protected:
    Implementor* implementor;
};
