#ifndef PRODUCT_A2_HPP
#define PRODUCT_A2_HPP

#include "AbstractProductA.hpp"
#include <iostream>

class ProductA2 : public AbstractProductA
{
  public:
    void use() override
    {
        std::cout << "Using ProductA2" << std::endl;
    }
};

#endif // PRODUCT_A2_HPP
