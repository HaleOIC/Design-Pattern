#ifndef UNSHARED_CONCRETE_FLYWEIGHT_HPP
#define UNSHARED_CONCRETE_FLYWEIGHT_HPP

#include "Flyweight.hpp"
#include <iostream>

class UnsharedConcreteFlyweight : public Flyweight
{
  public:
    UnsharedConcreteFlyweight(const std::string &allState)
        : allState_(allState) {}

    void operation(const std::string &extrinsicState) override
    {
        std::cout << "UnsharedConcreteFlyweight: AllState [" << allState_
                  << "] Extrinsic [" << extrinsicState << "]" << std::endl;
    }

  private:
    std::string allState_;
};

#endif // UNSHARED_CONCRETE_FLYWEIGHT_HPP
