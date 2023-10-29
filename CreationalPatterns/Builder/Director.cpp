// Director.cpp
#include "Director.hpp"

void Director::construct(Builder* builder) {
    builder->buildPartA();
    builder->buildPartB();
    builder->buildPartC();
}
