#ifndef CONCRETE_PROTOTYPE_HPP
#define CONCRETE_PROTOTYPE_HPP

#include "Prototype.hpp"

class ConcretePrototype : public Prototype
{
  private:
    int field1;

  public:
    ConcretePrototype(int field) : field1(field) {}
    ConcretePrototype(const ConcretePrototype &prototype) : field1(prototype.field1) {}

    Prototype *clone() const override
    {
        return new ConcretePrototype(*this);
    }
};

#endif // CONCRETE_PROTOTYPE_HPP
