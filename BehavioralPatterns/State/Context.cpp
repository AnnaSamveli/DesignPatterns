// Context.cpp
#include "Context.h"
#include <iostream>

Context::Context(State* initialState) : currentState(initialState) {}

void Context::request() {
    currentState->handle(*this);
}

void Context::changeState(State* newState) {
    delete currentState;
    currentState = newState;
}
