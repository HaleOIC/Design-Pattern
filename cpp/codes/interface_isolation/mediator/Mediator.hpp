#ifndef MEDIATOR_HPP
#define MEDIATOR_HPP

#include "Colleague.hpp"
#include <string>
class Colleague;

// Mediator Interface
class Mediator
{
  public:
    virtual void sendMessage(const std::string &message, Colleague *colleague) = 0;
    virtual ~Mediator() = default;
};

#endif // MEDIATOR_HPP
