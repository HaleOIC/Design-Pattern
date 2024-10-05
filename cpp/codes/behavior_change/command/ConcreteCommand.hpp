#ifndef CONCRETECOMMAND_HPP
#define CONCRETECOMMAND_HPP

#include "Command.hpp"
#include "Receiver.hpp"

class ConcreteCommand : public Command
{
  private:
    Receiver *receiver;

  public:
    ConcreteCommand(Receiver *recv) : receiver(recv) {}

    void execute() override
    {
        receiver->action();
    }
};

#endif // CONCRETECOMMAND_HPP
