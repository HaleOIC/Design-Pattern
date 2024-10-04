#ifndef REFINEDABSTRACTION_HPP
#define REFINEDABSTRACTION_HPP

#include "Abstraction.hpp"
#include <iostream>

// RefinedAbstraction
class RefinedAbstraction : public Abstraction
{
  public:
    RefinedAbstraction(std::shared_ptr<Implementor> implementor) : Abstraction(implementor) {}
    void Operation() override
    {
        std::cout << "RefinedAbstraction Operation executed." << std::endl;
        imp->OperationImpl();
    }
};

#endif // REFINEDABSTRACTION_HPP