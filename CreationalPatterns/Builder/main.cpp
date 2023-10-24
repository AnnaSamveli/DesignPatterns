// main.cpp
#include "ConcreteBuilder.hpp"
#include "Director.hpp"

int main() {
    ConcreteBuilder builder;
    Director director;

    director.construct(&builder);
    Product* product = builder.getResult();
    product->showProduct();

    delete product;

    return 0;
}
