// Decorator.cpp
#include "Decorator.h"

Decorator::Decorator(Component* component) : component(component) {}

void Decorator::operation() const {
    if (component != nullptr) {
        component->operation();
    }
}
