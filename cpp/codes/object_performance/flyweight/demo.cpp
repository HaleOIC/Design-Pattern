#include "FlyweightFactory.hpp"
#include "UnsharedConcreteFlyweight.hpp"
#include <iostream>

int main()
{
    FlyweightFactory factory;

    auto flyweight1 = factory.getFlyweight("State1");
    flyweight1->operation("Extrinsic1");

    auto flyweight2 = factory.getFlyweight("State2");
    flyweight2->operation("Extrinsic2");

    auto flyweight3 = factory.getFlyweight("State1");
    flyweight3->operation("Extrinsic3");

    UnsharedConcreteFlyweight unshared("AllState");
    unshared.operation("Extrinsic4");

    return 0;
}
