// Receiver.cpp
#include "Receiver.h"
#include <iostream>

void Receiver::performAction(int value) {
    std::cout << "Performing action with value: " << value << std::endl;
    state += value;
}

void Receiver::undoAction(int value) {
    std::cout << "Undoing action with value: " << value << std::endl;
    state -= value;
}
