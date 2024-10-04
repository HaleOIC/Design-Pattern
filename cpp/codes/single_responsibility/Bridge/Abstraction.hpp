#ifndef ABSTRACTION_HPP
#define ABSTRACTION_HPP

#include "Implementor.hpp"
#include <memory>

// Abstraction
class Abstraction
{
  protected:
    std::shared_ptr<Implementor> imp;

  public:
    Abstraction(std::shared_ptr<Implementor> implementor) : imp(implementor) {}
    virtual void Operation()
    {
        imp->OperationImpl();
    }
    virtual ~Abstraction() = default;
};

#endif // ABSTRACTION_HPP