#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include <iostream>
#include <string>

// Target Interface
class Target
{
  public:
    virtual std::string request() const
    {
        return "Target: The default target's behavior.";
    }
    virtual ~Target() = default;
};

// Adaptee
class Adaptee
{
  public:
    std::string specificRequest() const
    {
        return ".eetpadA eht fo roivaheb laicepS";
    }
};

// Adapter
class Adapter : public Target
{
  private:
    Adaptee *adaptee_;

  public:
    Adapter(Adaptee *adaptee) : adaptee_(adaptee) {}

    std::string request() const override
    {
        std::string toReverse = adaptee_->specificRequest();
        return std::string(toReverse.rbegin(), toReverse.rend());
    }
};

#endif // ADAPTER_HPP
