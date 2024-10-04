#ifndef CONCRETE_IMPLEMENTOR_B_HPP
#define CONCRETE_IMPLEMENTOR_B_HPP

#include "Implementor.hpp"
#include <iostream>

// ConcreteImplementorB
class ConcreteImplementorB : public Implementor
{
  public:
    void OperationImpl() override
    {
        std::cout << "ConcreteImplementorB OperationImpl executed." << std::endl;
    }
};

#endif // CONCRETE_IMPLEMENTOR_B_HPP