#include "Context.hpp"
#include "NonterminalExpression.hpp"
#include "TerminalExpression.hpp"

int main()
{
    Context context;

    TerminalExpression terminalExpression;
    NonterminalExpression nonterminalExpression;

    nonterminalExpression.addExpression(&terminalExpression);

    nonterminalExpression.interpret(&context);

    return 0;
}
