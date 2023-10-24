// Adapter.cpp
#include "Adapter.hpp"

Adapter::Adapter(Adaptee* adaptee) : adaptee(adaptee) {}

void Adapter::request() {
    adaptee->specificRequest();
}
