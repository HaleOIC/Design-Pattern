#ifndef NONTERMINALEXPRESSION_HPP
#define NONTERMINALEXPRESSION_HPP

#include "AbstractExpression.hpp"
#include <iostream>
#include <vector>

class NonterminalExpression : public AbstractExpression
{
  private:
    std::vector<AbstractExpression *> expressions;

  public:
    void addExpression(AbstractExpression *expression)
    {
        expressions.push_back(expression);
    }

    void interpret(Context *context) override
    {
        std::cout << "NonterminalExpression: Interpreting context" << std::endl;
        for (auto &expr : expressions) {
            expr->interpret(context);
        }
    }
};

#endif // NONTERMINALEXPRESSION_HPP
