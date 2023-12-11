// Receiver.h
#pragma once

class Receiver {
public:
    void performAction(int value);
    void undoAction(int value);

private:
    int state = 0;
};
