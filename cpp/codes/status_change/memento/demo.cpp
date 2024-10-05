#include "Caretaker.hpp"
#include "Originator.hpp"
#include <iostream>

int main()
{
    Originator originator;
    Caretaker caretaker;

    originator.setState("State1");
    std::cout << "Originator State: " << originator.getState() << std::endl;

    caretaker.saveMemento(originator.createMemento());

    originator.setState("State2");
    std::cout << "Originator State: " << originator.getState() << std::endl;

    originator.setMemento(caretaker.getMemento());
    std::cout << "Restored Originator State: " << originator.getState() << std::endl;

    return 0;
}