// ConcreteHandlerB.h
#pragma once

#include "Handler.h"
#include <iostream>

class ConcreteHandlerB : public Handler {
public:
    void handleRequest(int request) override;
};
