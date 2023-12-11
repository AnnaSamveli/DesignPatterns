// ConcreteObserverA.h
#pragma once

#include "Observer.h"
#include <iostream>

class ConcreteObserverA : public Observer {
public:
    void update(int value) override;
};
