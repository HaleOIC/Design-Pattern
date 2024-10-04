/**
 * ConcreteSubject.hpp
 * serve as the role of the ConcreteSubject class in the Observer pattern
 * contains the state of the subject and the methods to get and set the state
 */
#ifndef CONCRETESUBJECT_HPP
#define CONCRETESUBJECT_HPP
#include "Subject.hpp"

class ConcreteSubject : public Subject
{
  public:
    int GetState()
    {
        return subjectState;
    }

    void SetState(int state)
    {
        subjectState = state;
        Notify();
    }

  private:
    int subjectState;
};

#endif // CONCRETESUBJECT_HPP