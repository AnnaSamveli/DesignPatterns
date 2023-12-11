// Invoker.cpp
#include "Invoker.h"

void Invoker::setCommand(Command* command) {
    this->command = command;
}

void Invoker::executeCommand() {
    if (command) {
        command->execute();
    }
}

void Invoker::undoCommand() {
    if (command) {
        command->undo();
    }
}
