// ConcreteStateB.h
#pragma once

#include "State.h"

class ConcreteStateB : public State {
public:
    void handle(Context& context) override;
};
