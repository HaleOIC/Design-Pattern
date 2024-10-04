#ifndef CONCRETE_FACTORY2_HPP
#define CONCRETE_FACTORY2_HPP

#include "AbstractFactory.hpp"
#include "ProductA2.hpp"
#include "ProductB2.hpp"

class ConcreteFactory2 : public AbstractFactory
{
  public:
    std::unique_ptr<AbstractProductA> createProductA() override
    {
        return std::make_unique<ProductA2>();
    }

    std::unique_ptr<AbstractProductB> createProductB() override
    {
        return std::make_unique<ProductB2>();
    }
};

#endif // CONCRETE_FACTORY2_HPP
