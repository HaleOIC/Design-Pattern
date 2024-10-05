#include "ConcreteStateB.hpp"
#include "ConcreteStateA.hpp"

void ConcreteStateB::handle(Context *context)
{
    std::cout << "Handling request in ConcreteStateB.\n";
    context->setState(new ConcreteStateA());
}