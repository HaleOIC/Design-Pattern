#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "State.hpp"

class Context
{
  private:
    State *state_;

  public:
    Context(State *state) : state_(state) {}
    ~Context() { delete state_; }

    void setState(State *state)
    {
        delete state_;
        state_ = state;
    }

    void request()
    {
        if (state_) {
            state_->handle(this);
        }
    }
};

#endif // CONTEXT_HPP
