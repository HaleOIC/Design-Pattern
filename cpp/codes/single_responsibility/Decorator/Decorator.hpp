#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "Component.hpp"
#include <iostream>
#include <memory>

// Decorator class
class Decorator : public Component
{
  protected:
    std::unique_ptr<Component> component;

  public:
    Decorator(std::unique_ptr<Component> comp) : component(std::move(comp)) {}

    void Operation() const override
    {
        if (component) {
            component->Operation();
        }
    }
};

#endif // DECORATOR_HPP