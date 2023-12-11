// ConcreteDecoratorA.h
#pragma once

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component);
    void operation() const override;
    void additionalOperationA() const;

};
