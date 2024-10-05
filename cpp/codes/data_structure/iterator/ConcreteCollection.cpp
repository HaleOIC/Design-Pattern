#include "ConcreteCollection.hpp"
#include "ConcreteIterator.hpp"

Iterator *ConcreteCollection::createIterator() const
{
    return new ConcreteIterator(this);
}
