#ifndef VISITOR_HPP
#define VISITOR_HPP

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
  public:
    virtual ~Visitor() {}
    virtual void visitConcreteElementA(ConcreteElementA *element) = 0;
    virtual void visitConcreteElementB(ConcreteElementB *element) = 0;
};

#endif // VISITOR_HPP
