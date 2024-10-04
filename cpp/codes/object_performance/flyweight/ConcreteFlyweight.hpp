#ifndef CONCRETE_FLYWEIGHT_HPP
#define CONCRETE_FLYWEIGHT_HPP

#include "Flyweight.hpp"
#include <iostream>

class ConcreteFlyweight : public Flyweight
{
  public:
    ConcreteFlyweight(const std::string &intrinsicState)
        : intrinsicState_(intrinsicState) {}

    void operation(const std::string &extrinsicState) override
    {
        std::cout << "ConcreteFlyweight: Intrinsic [" << intrinsicState_
                  << "] Extrinsic [" << extrinsicState << "]" << std::endl;
    }

  private:
    std::string intrinsicState_;
};

#endif // CONCRETE_FLYWEIGHT_HPP
