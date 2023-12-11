// Invoker.h
#pragma once

#include "Command.h"

class Invoker {
public:
    void setCommand(Command* command);
    void executeCommand();
    void undoCommand();

private:
    Command* command = nullptr;
};
