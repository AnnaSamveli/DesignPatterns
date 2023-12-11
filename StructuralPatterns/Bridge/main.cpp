// main.cpp
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "RefinedAbstraction.h"

int main() {
    // Creating concrete implementors
    ConcreteImplementorA implementorA;
    ConcreteImplementorB implementorB;

    // Creating refined abstractions with different implementors
    RefinedAbstraction abstractionA(&implementorA);
    RefinedAbstraction abstractionB(&implementorB);

    // Performing operations on refined abstractions
    abstractionA.operation();
    abstractionB.operation();

    return 0;
}
