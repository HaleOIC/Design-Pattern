#ifndef COMPONENT_HPP
#define COMPONENT_HPP

// Component interface
class Component
{
  public:
    virtual ~Component() = default;
    virtual void Operation() const = 0;
};

#endif // COMPONENT_HPP