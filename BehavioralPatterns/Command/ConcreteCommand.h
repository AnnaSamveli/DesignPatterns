// ConcreteCommand.h
#pragma once

#include "Command.h"
#include "Receiver.h"

class ConcreteCommand : public Command {
public:
    ConcreteCommand(Receiver& receiver, int value);
    void execute() override;
    void undo() override;

private:
    Receiver& receiver;
    int value;
};
