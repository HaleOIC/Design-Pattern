#ifndef PRODUCT_B2_HPP
#define PRODUCT_B2_HPP

#include "AbstractProductB.hpp"
#include <iostream>

class ProductB2 : public AbstractProductB
{
  public:
    void use() override
    {
        std::cout << "Using ProductB2" << std::endl;
    }
};

#endif // PRODUCT_B2_HPP
