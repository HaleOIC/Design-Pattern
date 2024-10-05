#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP

#include "Memento.hpp"
#include <string>

class Originator
{
  private:
    std::string state_;

  public:
    void setState(const std::string &state)
    {
        state_ = state;
    }

    std::string getState() const
    {
        return state_;
    }

    Memento *createMemento() const
    {
        return new Memento(state_);
    }

    void setMemento(Memento *memento)
    {
        if (memento) {
            state_ = memento->getState();
        }
    }
};

#endif // ORIGINATOR_HPP
