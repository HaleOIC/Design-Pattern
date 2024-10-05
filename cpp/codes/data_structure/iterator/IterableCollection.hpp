#ifndef ITERABLECOLLECTION_HPP
#define ITERABLECOLLECTION_HPP

#include "Iterator.hpp"

class IterableCollection
{
  public:
    virtual ~IterableCollection() {}
    virtual Iterator *createIterator() const = 0;
};

#endif // ITERABLECOLLECTION_HPP
