#ifndef CONCRETECOLLEAGUE1_HPP
#define CONCRETECOLLEAGUE1_HPP

#include "Colleague.hpp"
#include <iostream>

// ConcreteColleague1
class ConcreteColleague1 : public Colleague
{
  public:
    using Colleague::Colleague;

    void sendMessage(const std::string &message)
    {
        mediator_->sendMessage(message, this);
    }

    void receiveMessage(const std::string &message) override
    {
        std::cout << "Colleague1 received: " << message << std::endl;
    }
};

#endif // CONCRETECOLLEAGUE1_HPP