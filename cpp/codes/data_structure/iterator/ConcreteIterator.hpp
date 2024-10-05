#ifndef CONCRETEITERATOR_HPP
#define CONCRETEITERATOR_HPP

#include "ConcreteCollection.hpp"
#include "Iterator.hpp"

class ConcreteIterator : public Iterator
{
  private:
    const ConcreteCollection *collection_;
    int iterationState_;

  public:
    ConcreteIterator(const ConcreteCollection *collection)
        : collection_(collection), iterationState_(0) {}

    int getNext() override
    {
        return collection_->getItem(iterationState_++);
    }

    bool hasMore() const override
    {
        return iterationState_ < collection_->getSize();
    }
};

#endif // CONCRETEITERATOR_HPP
