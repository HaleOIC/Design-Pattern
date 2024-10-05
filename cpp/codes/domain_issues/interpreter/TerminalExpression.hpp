#ifndef TERMINALEXPRESSION_HPP
#define TERMINALEXPRESSION_HPP

#include "AbstractExpression.hpp"
#include <iostream>

class TerminalExpression : public AbstractExpression
{
  public:
    void interpret(Context *context) override
    {
        std::cout << "TerminalExpression: Interpreting context" << std::endl;
    }
};

#endif // TERMINALEXPRESSION_HPP
