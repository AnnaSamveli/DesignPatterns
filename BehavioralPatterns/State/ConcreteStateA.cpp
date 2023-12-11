// ConcreteStateA.cpp
#include "ConcreteStateA.h"
#include "Context.h"
#include <iostream>

void ConcreteStateA::handle(Context& context) {
    std::cout << "Handling in ConcreteStateA." << std::endl;
    // Change the state to ConcreteStateB
    context.changeState(new ConcreteStateB());
}
