// ConcreteHandlerB.cpp
#include "ConcreteHandlerB.h"

void ConcreteHandlerB::handleRequest(int request) {
    if (request >= 10 && request < 20) {
        std::cout << "ConcreteHandlerB handled the request." << std::endl;
    } else if (successor != nullptr) {
        successor->handleRequest(request);
    }
}
