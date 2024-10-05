#ifndef CONCRETESTATEA_HPP
#define CONCRETESTATEA_HPP

#include "Context.hpp"
#include "State.hpp"
#include <iostream>

class ConcreteStateA : public State
{
  public:
    void handle(Context *context) override;
};

#endif // CONCRETESTATEA_HPP
