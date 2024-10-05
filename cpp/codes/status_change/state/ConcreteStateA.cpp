#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"

void ConcreteStateA::handle(Context *context)
{
    std::cout << "Handling request in ConcreteStateA.\n";
    context->setState(new ConcreteStateB());
}