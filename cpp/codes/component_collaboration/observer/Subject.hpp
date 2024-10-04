/**
 * subject.hpp
 * serve as the role of the Subject class in the Observer pattern
 * contains attach(subscribe), detach(unsubscribe), and notify methods
 */

#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"
#include <algorithm>
#include <vector>

class Subject
{
  public:
    void Attach(Observer *observer)
    {
        observers.push_back(observer);
    }

    void Detach(Observer *observer)
    {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void Notify()
    {
        for (Observer *observer : observers) {
            observer->Update();
        }
    }

  private:
    std::vector<Observer *> observers;
};
#endif // SUBJECT_HPP