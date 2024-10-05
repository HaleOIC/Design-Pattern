#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#include "Visitor.hpp"

class Element
{
  public:
    virtual ~Element() {}
    virtual void accept(Visitor *visitor) = 0;
};

#endif // ELEMENT_HPP
