#ifndef INVOKER_HPP
#define INVOKER_HPP

#include "Command.hpp"
#include <vector>

class Invoker
{
  private:
    std::vector<Command *> commands;

  public:
    Invoker()
    {
        this->commands = std::vector<Command*>();
    }

    void addCommand(Command *cmd)
    {
        commands.push_back(cmd);
    }

    void invoke()
    {
        for (auto &cmd : commands) {
            cmd->execute();
        }
    }
};

#endif // INVOKER_HPP
