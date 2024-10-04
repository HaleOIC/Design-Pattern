/**
 * ConcreteObserver.hpp
 * serve as the role of the ConcreteObserver class in the Observer pattern
 * contains the state of the observer and the method to update the state
 */
#ifndef CONCRETEOBSERVER_HPP
#define CONCRETEOBSERVER_HPP

#include "ConcreteSubject.hpp"
#include "Observer.hpp"
#include <iostream>

class ConcreteObserver : public Observer
{
  public:
    ConcreteObserver(ConcreteSubject *subject) : subject(subject) {}

    void Update() override
    {
        observerState = subject->GetState();
        std::cout << "Observer State Updated: " << observerState << std::endl;
    }

  private:
    ConcreteSubject *subject;
    int observerState;
};

#endif // CONCRETEOBSERVER_HPP