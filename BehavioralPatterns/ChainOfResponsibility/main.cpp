// main.cpp
#include "ConcreteHandlerA.h"
#include "ConcreteHandlerB.h"
#include "ConcreteHandlerC.h"

int main() {
    // Creating handlers
    ConcreteHandlerA handlerA;
    ConcreteHandlerB handlerB;
    ConcreteHandlerC handlerC;

    // Setting up the chain of responsibility
    handlerA.setSuccessor(&handlerB);
    handlerB.setSuccessor(&handlerC);

    // Processing requests
    handlerA.handleRequest(5);
    handlerA.handleRequest(15);
    handlerA.handleRequest(25);

    return 0;
}
