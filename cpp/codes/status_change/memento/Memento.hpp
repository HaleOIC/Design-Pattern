#ifndef MEMENTO_HPP
#define MEMENTO_HPP

#include <string>

class Memento
{
  private:
    std::string state_;

  public:
    Memento(const std::string &state) : state_(state) {}

    std::string getState() const
    {
        return state_;
    }
};

#endif // MEMENTO_HPP
