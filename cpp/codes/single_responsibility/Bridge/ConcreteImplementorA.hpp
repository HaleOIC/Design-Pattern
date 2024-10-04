#ifndef CONCRETE_IMPLEMENTOR_A_HPP
#define CONCRETE_IMPLEMENTOR_A_HPP

#include "Implementor.hpp"
#include <iostream>

// ConcreteImplementorA
class ConcreteImplementorA : public Implementor
{
  public:
    void OperationImpl() override
    {
        std::cout << "ConcreteImplementorA OperationImpl executed." << std::endl;
    }
};
#endif // CONCRETE_IMPLEMENTOR_A_HPP