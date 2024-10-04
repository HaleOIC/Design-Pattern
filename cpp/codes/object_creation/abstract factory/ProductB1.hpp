#ifndef PRODUCT_B1_HPP
#define PRODUCT_B1_HPP

#include "AbstractProductB.hpp"
#include <iostream>

class ProductB1 : public AbstractProductB
{
  public:
    void use() override
    {
        std::cout << "Using ProductB1" << std::endl;
    }
};

#endif // PRODUCT_B1_HPP
