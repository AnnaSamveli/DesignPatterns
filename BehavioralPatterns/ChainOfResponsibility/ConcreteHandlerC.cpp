// ConcreteHandlerC.cpp
#include "ConcreteHandlerC.h"

void ConcreteHandlerC::handleRequest(int request) {
    if (request >= 20 && request < 30) {
        std::cout << "ConcreteHandlerC handled the request." << std::endl;
    } else if (successor != nullptr) {
        successor->handleRequest(request);
    }
}
