// Product.hpp
#pragma once

#include <iostream>
#include <string>

class Product {
public:
    void setPartA(const std::string& partA);
    void setPartB(const std::string& partB);
    void setPartC(const std::string& partC);
    void showProduct();

private:
    std::string partA;
    std::string partB;
    std::string partC;
};
