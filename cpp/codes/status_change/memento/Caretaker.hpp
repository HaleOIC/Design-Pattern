#ifndef CARETAKER_HPP
#define CARETAKER_HPP

#include "Memento.hpp"

class Caretaker
{
  private:
    Memento *memento_;

  public:
    Caretaker() : memento_(nullptr) {}
    ~Caretaker() { delete memento_; }

    void saveMemento(Memento *memento)
    {
        delete memento_;
        memento_ = memento;
    }

    Memento *getMemento() const
    {
        return memento_;
    }
};

#endif // CARETAKER_HPP
