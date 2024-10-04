#ifndef CONCRETEDECORATORA_HPP
#define CONCRETEDECORATORA_HPP

#include "Decorator.hpp"
#include <iostream>

// ConcreteDecoratorA class
class ConcreteDecoratorA : public Decorator
{
  private:
    std::string addedState = "Added State A";

  public:
    ConcreteDecoratorA(std::unique_ptr<Component> comp) : Decorator(std::move(comp)) {}

    void Operation() const override
    {
        Decorator::Operation();
        std::cout << "ConcreteDecoratorA Operation with " << addedState << std::endl;
    }
};

#endif // CONCRETEDECORATORA_HPP