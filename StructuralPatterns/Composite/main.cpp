// main.cpp
#include "Leaf.hpp"
#include "Composite.hpp"

int main() {
    Leaf leaf1;
    Leaf leaf2;
    Composite composite;
    
    composite.add(&leaf1);
    composite.add(&leaf2);
    
    // Client code treats individual and composite objects uniformly
    Component* component1 = &leaf1;
    Component* component2 = &composite;
    
    component1->operation();
    component2->operation();
    
    return 0;
}
