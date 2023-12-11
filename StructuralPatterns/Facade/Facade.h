// Facade.h
#pragma once

#include "SubsystemA.h"
#include "SubsystemB.h"

class Facade {
public:
    Facade();
    void operation() const;

private:
    SubsystemA subsystemA;
    SubsystemB subsystemB;
};
