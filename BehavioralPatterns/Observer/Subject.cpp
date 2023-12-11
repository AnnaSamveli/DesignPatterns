// Subject.cpp
#include "Subject.h"

void Subject::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Subject::removeObserver(Observer* observer) {
    // Remove observer from the vector (implementation omitted for simplicity)
    // ...
}

void Subject::notifyObservers(int value) {
    for (Observer* observer : observers) {
        observer->update(value);
    }
}
