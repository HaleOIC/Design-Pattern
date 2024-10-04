#include "ConcreteFactory1.hpp"
#include "ConcreteFactory2.hpp"
#include <memory>

void clientCode(std::unique_ptr<AbstractFactory> factory)
{
    auto productA = factory->createProductA();
    auto productB = factory->createProductB();
    productA->use();
    productB->use();
}

int main()
{
    std::unique_ptr<AbstractFactory> factory1 = std::make_unique<ConcreteFactory1>();
    clientCode(std::move(factory1));

    std::unique_ptr<AbstractFactory> factory2 = std::make_unique<ConcreteFactory2>();
    clientCode(std::move(factory2));

    return 0;
}
