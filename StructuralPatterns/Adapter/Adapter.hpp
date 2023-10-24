// Adapter.hpp
#pragma once

#include "Target.hpp"
#include "Adaptee.hpp"

class Adapter : public Target {
public:
    Adapter(Adaptee* adaptee);
    void request() override;

private:
    Adaptee* adaptee;
};
