// ConcreteHandlerA.cpp
#include "ConcreteHandlerA.h"

void ConcreteHandlerA::handleRequest(int request) {
    if (request >= 0 && request < 10) {
        std::cout << "ConcreteHandlerA handled the request." << std::endl;
    } else if (successor != nullptr) {
        successor->handleRequest(request);
    }
}
