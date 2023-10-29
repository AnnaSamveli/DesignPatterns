// main.cpp
#include "singleton.hpp"
#include <iostream>

int main() {
    Singleton& instance1 = Singleton::getInstance();
    Singleton& instance2 = Singleton::getInstance();

    if (&instance1 == &instance2) {
        std::cout << "instance1 and instance2 are the same object." << std::endl;
    } else {
        std::cout << "instance1 and instance2 are different objects (which should not happen)." << std::endl;
    }

    instance1.someOperation(); // Use the Singleton instance

    return 0;
}

