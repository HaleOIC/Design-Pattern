#ifndef CONCRETEELEMENTA_HPP
#define CONCRETEELEMENTA_HPP

#include "Element.hpp"

class ConcreteElementA : public Element
{
  public:
    void accept(Visitor *visitor) override
    {
        visitor->visitConcreteElementA(this);
    }
    void operationA()
    {
        // Implementation of operation A
    }
};

#endif // CONCRETEELEMENTA_HPP
