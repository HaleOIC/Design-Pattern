#ifndef ITERATOR_HPP
#define ITERATOR_HPP

class Iterator
{
  public:
    virtual ~Iterator() {}
    virtual int getNext() = 0;
    virtual bool hasMore() const = 0;
};

#endif // ITERATOR_HPP
