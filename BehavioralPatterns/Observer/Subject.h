// Subject.h
#pragma once

#include <vector>
#include "Observer.h"

class Subject {
public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void notifyObservers(int value);

private:
    std::vector<Observer*> observers;
};
