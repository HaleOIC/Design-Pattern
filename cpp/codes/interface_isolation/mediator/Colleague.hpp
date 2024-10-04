#ifndef COLLEAGUE_HPP
#define COLLEAGUE_HPP

#include "Mediator.hpp"
// Colleague
class Colleague
{
  protected:
    Mediator *mediator_;

  public:
    Colleague(Mediator *mediator) : mediator_(mediator) {}
    virtual void receiveMessage(const std::string &message) = 0;
};

#endif // COLLEAGUE_HPP