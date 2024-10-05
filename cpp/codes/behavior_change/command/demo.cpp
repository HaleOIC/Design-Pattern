#include "ConcreteCommand.hpp"
#include "Invoker.hpp"
#include "Receiver.hpp"

int main()
{
    Receiver receiver;
    ConcreteCommand command(&receiver);
    Invoker invoker;

    invoker.addCommand(&command);
    invoker.invoke();

    return 0;
}
