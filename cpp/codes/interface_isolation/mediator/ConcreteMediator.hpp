#ifndef CONCRETEMEDIATOR_HPP
#define CONCRETEMEDIATOR_HPP

#include "Mediator.hpp"
#include <vector>

// ConcreteMediator
class ConcreteMediator : public Mediator
{
  private:
    std::vector<Colleague *> colleagues_;

  public:
    void addColleague(Colleague *colleague)
    {
        colleagues_.push_back(colleague);
    }

    void sendMessage(const std::string &message, Colleague *sender) override
    {
        for (auto colleague : colleagues_) {
            if (colleague != sender) {
                colleague->receiveMessage(message);
            }
        }
    }
};

#endif // CONCRETEMEDIATOR_HPP