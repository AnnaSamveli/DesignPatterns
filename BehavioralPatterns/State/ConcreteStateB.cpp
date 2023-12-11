// ConcreteStateB.cpp
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

void ConcreteStateB::handle(Context& context) {
    std::cout << "Handling in ConcreteStateB." << std::endl;
    // Change the state back to ConcreteStateA
    context.changeState(new ConcreteStateA());
}
