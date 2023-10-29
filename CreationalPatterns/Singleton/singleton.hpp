// singleton.hpp
#pragma once

class Singleton {
public:
    static Singleton& getInstance();
    void someOperation();

private:
    Singleton();  // Private constructor
};

