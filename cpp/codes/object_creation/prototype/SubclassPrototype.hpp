#ifndef SUBCLASS_PROTOTYPE_HPP
#define SUBCLASS_PROTOTYPE_HPP

#include "Prototype.hpp"

class SubclassPrototype : public Prototype
{
  private:
    int field2;

  public:
    SubclassPrototype(int field) : field2(field) {}
    SubclassPrototype(const SubclassPrototype &prototype) : field2(prototype.field2) {}

    Prototype *clone() const override
    {
        return new SubclassPrototype(*this);
    }
};

#endif // SUBCLASS_PROTOTYPE_HPP
