// ConcreteCommand.cpp
#include "ConcreteCommand.h"

ConcreteCommand::ConcreteCommand(Receiver& receiver, int value) : receiver(receiver), value(value) {}

void ConcreteCommand::execute() {
    receiver.performAction(value);
}

void ConcreteCommand::undo() {
    receiver.undoAction(value);
}
