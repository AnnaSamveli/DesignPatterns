// Composite.cpp
#include "Composite.hpp"
#include <iostream>

void Composite::operation() {
    std::cout << "Composite operation" << std::endl;
    for (Component* component : components) {
        component->operation();
    }
}

void Composite::add(Component* component) {
    components.push_back(component);
}

void Composite::remove(Component* component) {
    // Implement removal logic
    // ...
}
