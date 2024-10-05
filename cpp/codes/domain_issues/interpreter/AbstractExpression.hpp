#ifndef ABSTRACTEXPRESSION_HPP
#define ABSTRACTEXPRESSION_HPP

#include "Context.hpp"

class AbstractExpression
{
  public:
    virtual ~AbstractExpression() {}
    virtual void interpret(Context *context) = 0;
};

#endif // ABSTRACTEXPRESSION_HPP
