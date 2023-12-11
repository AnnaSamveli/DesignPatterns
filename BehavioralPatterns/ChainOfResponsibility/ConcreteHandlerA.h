// ConcreteHandlerA.h
#pragma once

#include "Handler.h"
#include <iostream>

class ConcreteHandlerA : public Handler {
public:
    void handleRequest(int request) override;
};
