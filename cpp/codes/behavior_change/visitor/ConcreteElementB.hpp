#ifndef CONCRETEELEMENTB_HPP
#define CONCRETEELEMENTB_HPP

#include "Element.hpp"

class ConcreteElementB : public Element
{
  public:
    void accept(Visitor *visitor) override
    {
        visitor->visitConcreteElementB(this);
    }
    void operationB()
    {
        // Implementation of operation B
    }
};

#endif // CONCRETEELEMENTB_HPP
