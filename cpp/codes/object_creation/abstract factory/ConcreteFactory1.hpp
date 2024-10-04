#ifndef CONCRETE_FACTORY1_HPP
#define CONCRETE_FACTORY1_HPP

#include "AbstractFactory.hpp"
#include "ProductA1.hpp"
#include "ProductB1.hpp"

class ConcreteFactory1 : public AbstractFactory
{
  public:
    std::unique_ptr<AbstractProductA> createProductA() override
    {
        return std::make_unique<ProductA1>();
    }

    std::unique_ptr<AbstractProductB> createProductB() override
    {
        return std::make_unique<ProductB1>();
    }
};

#endif // CONCRETE_FACTORY1_HPP
