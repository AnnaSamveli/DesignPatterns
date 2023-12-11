// ConcreteObserverA.cpp
#include "ConcreteObserverA.h"

void ConcreteObserverA::update(int value) {
    std::cout << "ConcreteObserverA received update: " << value << std::endl;
}
