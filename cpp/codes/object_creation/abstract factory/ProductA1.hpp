#ifndef PRODUCT_A1_HPP
#define PRODUCT_A1_HPP

#include "AbstractProductA.hpp"
#include <iostream>

class ProductA1 : public AbstractProductA
{
  public:
    void use() override
    {
        std::cout << "Using ProductA1" << std::endl;
    }
};

#endif // PRODUCT_A1_HPP
