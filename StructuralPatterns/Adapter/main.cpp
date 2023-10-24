// main.cpp
#include "Adapter.hpp"
#include "Adaptee.hpp"

int main() {
    Adaptee adaptee;
    Adapter adapter(&adaptee);

    // Client code works with the Target interface
    Target* target = &adapter;
    target->request();

    return 0;
}
