#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <algorithm>
#include <iostream>
#include <vector>

// Observer interface
class Observer
{
  public:
    virtual void Update() = 0;
};

#endif // OBSERVER_HPP