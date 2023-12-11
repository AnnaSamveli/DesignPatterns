// main.cpp
#include "Subject.h"
#include "ConcreteObserverA.h"
#include "ConcreteObserverB.h"

int main() {
    // Creating subject and observers
    Subject subject;
    ConcreteObserverA observerA;
    ConcreteObserverB observerB;

    // Adding observers to the subject
    subject.addObserver(&observerA);
    subject.addObserver(&observerB);

    // Notifying observers of a state change
    subject.notifyObservers(42);

    // Removing observerA
    subject.removeObserver(&observerA);

    // Notifying observers again
    subject.notifyObservers(99);

    return 0;
}
