#include "ConcreteStateA.hpp"
#include "Context.hpp"

int main()
{
    Context context(new ConcreteStateA());
    context.request(); // Transition from A to B
    context.request(); // Transition from B to A

    return 0;
}
