#ifndef CONCRETECOLLEAGUE2_HPP
#define CONCRETECOLLEAGUE2_HPP

#include "Colleague.hpp"
#include <iostream>

// ConcreteColleague2
class ConcreteColleague2 : public Colleague
{
  public:
    using Colleague::Colleague;

    void sendMessage(const std::string &message)
    {
        mediator_->sendMessage(message, this);
    }

    void receiveMessage(const std::string &message) override
    {
        std::cout << "Colleague2 received: " << message << std::endl;
    }
};

#endif // CONCRETECOLLEAGUE2_HPP