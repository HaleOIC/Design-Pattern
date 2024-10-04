#ifndef FACADE_HPP
#define FACADE_HPP

#include <iostream>

// Subsystem A
class SubsystemA
{
  public:
    void operationA()
    {
        std::cout << "Subsystem A operation" << std::endl;
    }
};

// Subsystem B
class SubsystemB
{
  public:
    void operationB()
    {
        std::cout << "Subsystem B operation" << std::endl;
    }
};

// Subsystem C
class SubsystemC
{
  public:
    void operationC()
    {
        std::cout << "Subsystem C operation" << std::endl;
    }
};

// Facade
class Facade
{
  public:
    Facade() : subsystemA_(), subsystemB_(), subsystemC_() {}

    void operation()
    {
        subsystemA_.operationA();
        subsystemB_.operationB();
        subsystemC_.operationC();
    }

  private:
    SubsystemA subsystemA_;
    SubsystemB subsystemB_;
    SubsystemC subsystemC_;
};

#endif // FACADE_HPP
