#ifndef CONCRETEDECORATORB_HPP
#define CONCRETEDECORATORB_HPP

#include "Decorator.hpp"
#include <iostream>

// ConcreteDecoratorB class
class ConcreteDecoratorB : public Decorator
{
  public:
    ConcreteDecoratorB(std::unique_ptr<Component> comp) : Decorator(std::move(comp)) {}

    void Operation() const override
    {
        Decorator::Operation();
        AddedBehavior();
    }

    void AddedBehavior() const
    {
        std::cout << "ConcreteDecoratorB Added Behavior" << std::endl;
    }
};

#endif // CONCRETEDECORATORB_HPP