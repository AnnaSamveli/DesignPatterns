// Context.h
#pragma once

#include "State.h"

class Context {
public:
    Context(State* initialState);
    void request();
    void changeState(State* newState);

private:
    State* currentState;
};
