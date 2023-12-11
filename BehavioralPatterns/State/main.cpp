// main.cpp
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

int main() {
    // Create context with initial state ConcreteStateA
    Context context(new ConcreteStateA());

    // Perform requests on the context, which will trigger state transitions
    context.request();
    context.request();
    context.request();

    return 0;
}
