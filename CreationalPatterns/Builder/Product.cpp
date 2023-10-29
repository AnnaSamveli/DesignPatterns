// Product.cpp
#include "Product.hpp"

void Product::setPartA(const std::string& partA) {
    this->partA = partA;
}

void Product::setPartB(const std::string& partB) {
    this->partB = partB;
}

void Product::setPartC(const std::string& partC) {
    this->partC = partC;
}

void Product::showProduct() {
    std::cout << "Product: " << partA << ", " << partB << ", " << partC << std::endl;
}
