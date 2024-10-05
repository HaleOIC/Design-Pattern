#ifndef CONCRETESTATEB_HPP
#define CONCRETESTATEB_HPP

#include "Context.hpp"
#include "State.hpp"
#include <iostream>

class ConcreteStateB : public State
{
  public:
    void handle(Context *context) override;
};


#endif // CONCRETESTATEB_HPP
