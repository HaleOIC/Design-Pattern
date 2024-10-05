#ifndef CONCRETEVISITOR1_HPP
#define CONCRETEVISITOR1_HPP

#include "Visitor.hpp"
#include <iostream>

class ConcreteVisitor1 : public Visitor
{
  public:
    void visitConcreteElementA(ConcreteElementA *element) override
    {
        std::cout << "ConcreteVisitor1: Visiting ConcreteElementA" << std::endl;
    }
    void visitConcreteElementB(ConcreteElementB *element) override
    {
        std::cout << "ConcreteVisitor1: Visiting ConcreteElementB" << std::endl;
    }
};

#endif // CONCRETEVISITOR1_HPP
