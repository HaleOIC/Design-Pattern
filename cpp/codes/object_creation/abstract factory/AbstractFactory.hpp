#ifndef ABSTRACT_FACTORY_HPP
#define ABSTRACT_FACTORY_HPP

#include "AbstractProductA.hpp"
#include "AbstractProductB.hpp"
#include <memory>

class AbstractFactory
{
  public:
    virtual std::unique_ptr<AbstractProductA> createProductA() = 0;
    virtual std::unique_ptr<AbstractProductB> createProductB() = 0;
    virtual ~AbstractFactory() = default;
};

#endif // ABSTRACT_FACTORY_HPP
