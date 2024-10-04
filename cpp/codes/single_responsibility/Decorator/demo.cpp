#include "ConcreteComponent.hpp"
#include "ConcreteDecoratorA.hpp"
#include "ConcreteDecoratorB.hpp"
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<Component> component = std::make_unique<ConcreteComponent>();
    std::unique_ptr<Component> decoratorA = std::make_unique<ConcreteDecoratorA>(std::move(component));
    std::unique_ptr<Component> decoratorB = std::make_unique<ConcreteDecoratorB>(std::move(decoratorA));

    decoratorB->Operation();

    return 0;
}
