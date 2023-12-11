// ConcreteDecoratorB.h
#pragma once

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* component);
    void operation() const override;
    void additionalOperationB() const;
};
