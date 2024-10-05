#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <iostream>

class Component
{
  public:
    virtual ~Component() {}
    virtual void Operation() = 0;
    virtual void Add(Component *component) {}
    virtual void Remove(Component *component) {}
    virtual Component *GetChild(int index) { return nullptr; }
};

#endif // COMPONENT_HPP
