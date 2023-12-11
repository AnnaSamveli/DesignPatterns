// State.h
#pragma once

class Context;  // Forward declaration

class State {
public:
    virtual void handle(Context& context) = 0;
};
