// singleton.cpp
#include "singleton.hpp"

// Define the unique instance
Singleton& Singleton::getInstance() {
    static Singleton instance;  // Created on first call
    return instance;
}

// Some operation
void Singleton::someOperation() {
    // Implementation of some operation here
}
