// Decorator.h
#pragma once

#include "Component.h"

class Decorator : public Component {
public:
    Decorator(Component* component);
    void operation() const override;

private:
    Component* component;
};
