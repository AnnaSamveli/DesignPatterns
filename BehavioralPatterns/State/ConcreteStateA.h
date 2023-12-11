// ConcreteStateA.h
#pragma once

#include "State.h"

class ConcreteStateA : public State {
public:
    void handle(Context& context) override;
};
