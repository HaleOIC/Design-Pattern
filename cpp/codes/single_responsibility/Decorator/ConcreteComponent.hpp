#ifndef CONCRETECOMPONENT_HPP
#define CONCRETECOMPONENT_HPP

#include "Component.hpp"
#include <iostream>

// ConcreteComponent class
class ConcreteComponent : public Component
{
  public:
    void Operation() const override
    {
        std::cout << "ConcreteComponent Operation" << std::endl;
    }
};

#endif // CONCRETECOMPONENT_HPP