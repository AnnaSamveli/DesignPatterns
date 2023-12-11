// ConcreteObserverB.cpp
#include "ConcreteObserverB.h"

void ConcreteObserverB::update(int value) {
    std::cout << "ConcreteObserverB received update: " << value << std::endl;
}
