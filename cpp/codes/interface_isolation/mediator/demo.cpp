#include "ConcreteColleague1.hpp"
#include "ConcreteColleague2.hpp"
#include "ConcreteMediator.hpp"
#include "Mediator.hpp"

int main()
{
    ConcreteMediator mediator;

    ConcreteColleague1 colleague1(&mediator);
    ConcreteColleague2 colleague2(&mediator);

    mediator.addColleague(&colleague1);
    mediator.addColleague(&colleague2);

    colleague1.sendMessage("Hello from Colleague1");
    colleague2.sendMessage("Hello from Colleague2");

    return 0;
}
