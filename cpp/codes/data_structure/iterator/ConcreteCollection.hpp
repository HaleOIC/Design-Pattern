#ifndef CONCRETECOLLECTION_HPP
#define CONCRETECOLLECTION_HPP

#include "IterableCollection.hpp"
#include <vector>

class ConcreteIterator; // Forward declaration

class ConcreteCollection : public IterableCollection
{
  private:
    std::vector<int> items_;

  public:
    ConcreteCollection()
    {
        items_ = {1, 2, 3, 4, 5};
    }

    Iterator *createIterator() const override;

    int getItem(int index) const
    {
        return items_[index];
    }

    int getSize() const
    {
        return items_.size();
    }
};

#endif // CONCRETECOLLECTION_HPP
