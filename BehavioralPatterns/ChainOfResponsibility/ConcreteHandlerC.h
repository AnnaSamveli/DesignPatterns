// ConcreteHandlerC.h
#pragma once

#include "Handler.h"
#include <iostream>

class ConcreteHandlerC : public Handler {
public:
    void handleRequest(int request) override;
};
