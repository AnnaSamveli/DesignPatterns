// ConcreteObserverB.h
#pragma once

#include "Observer.h"
#include <iostream>

class ConcreteObserverB : public Observer {
public:
    void update(int value) override;
};
