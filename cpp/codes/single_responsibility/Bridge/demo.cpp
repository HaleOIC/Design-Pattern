#include "Abstraction.hpp"
#include "ConcreteImplementorA.hpp"
#include "ConcreteImplementorB.hpp"
#include "RefinedAbstraction.hpp"
#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<Implementor> implementorA = std::make_shared<ConcreteImplementorA>();
    std::shared_ptr<Implementor> implementorB = std::make_shared<ConcreteImplementorB>();

    std::unique_ptr<Abstraction> abstractionA = std::make_unique<RefinedAbstraction>(implementorA);
    std::unique_ptr<Abstraction> abstractionB = std::make_unique<RefinedAbstraction>(implementorB);

    abstractionA->Operation();
    abstractionB->Operation();

    return 0;
}
