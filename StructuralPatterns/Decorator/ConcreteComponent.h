// ConcreteComponent.h
#pragma once

#include "Component.h"

class ConcreteComponent : public Component {
public:
    void operation() const override;
};
