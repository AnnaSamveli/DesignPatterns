// main.cpp
#include "Invoker.h"
#include "ConcreteCommand.h"
#include "Receiver.h"

int main() {
    // Create receiver and concrete command
    Receiver receiver;
    ConcreteCommand command(receiver, 10);

    // Create invoker and set the command
    Invoker invoker;
    invoker.setCommand(&command);

    // Execute the command
    invoker.executeCommand();

    // Undo the command
    invoker.undoCommand();

    return 0;
}
