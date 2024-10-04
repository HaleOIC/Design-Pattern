#ifndef CONCRETEPRODUCT_HPP
#define CONCRETEPRODUCT_HPP

#include "Product.hpp"
#include <iostream>

/**
 * @brief The ConcreteProduct class is a concrete class that implements
 */
class ConcreteProduct : public Product
{
  public:
    void use() override
    {
        std::cout << "Using ConcreteProduct" << std::endl;
    }
};

#endif // CONCRETEPRODUCT_HPP