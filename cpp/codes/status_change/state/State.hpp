#ifndef STATE_HPP
#define STATE_HPP

class Context;

class State
{
  public:
    virtual void handle(Context *context) = 0;
    virtual ~State() = default;
};

#endif // STATE_HPP
