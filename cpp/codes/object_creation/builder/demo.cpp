#include "ConcreteBuilder.hpp"
#include "Director.hpp"
#include <iostream>

int main()
{
    Director director;
    ConcreteBuilder builder;

    director.construct(&builder);
    Product *product = builder.getResult();

    std::cout << "Product parts: " << product->getParts() << std::endl;

    delete product;
    return 0;
}
