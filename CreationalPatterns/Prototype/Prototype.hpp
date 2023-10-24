// Prototype.hpp
#pragma once

class Prototype {
public:
    virtual Prototype* clone() const = 0;
    virtual void print() const = 0;
};
