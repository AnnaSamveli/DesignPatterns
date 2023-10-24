// Composite.hpp
#pragma once

#include <vector>
#include "Component.hpp"

class Composite : public Component {
public:
    void operation() override;
    void add(Component* component);
    void remove(Component* component);

private:
    std::vector<Component*> components;
};
