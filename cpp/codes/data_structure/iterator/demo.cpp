#include "ConcreteCollection.hpp"
#include <iostream>

int main()
{
    ConcreteCollection *collection = new ConcreteCollection();
    Iterator *iterator = collection->createIterator();

    while (iterator->hasMore()) {
        std::cout << iterator->getNext() << " ";
    }
    std::cout << std::endl;

    delete iterator;
    delete collection;

    return 0;
}
