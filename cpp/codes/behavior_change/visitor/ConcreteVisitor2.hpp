#ifndef CONCRETEVISITOR2_HPP
#define CONCRETEVISITOR2_HPP

#include "Visitor.hpp"
#include <iostream>

class ConcreteVisitor2 : public Visitor
{
  public:
    void visitConcreteElementA(ConcreteElementA *element) override
    {
        std::cout << "ConcreteVisitor2: Visiting ConcreteElementA" << std::endl;
    }
    void visitConcreteElementB(ConcreteElementB *element) override
    {
        std::cout << "ConcreteVisitor2: Visiting ConcreteElementB" << std::endl;
    }
};

#endif // CONCRETEVISITOR2_HPP
