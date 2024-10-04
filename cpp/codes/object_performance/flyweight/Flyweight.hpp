#ifndef FLYWEIGHT_HPP
#define FLYWEIGHT_HPP

#include <string>

class Flyweight
{
  public:
    virtual void operation(const std::string &extrinsicState) = 0;
    virtual ~Flyweight() = default;
};

#endif // FLYWEIGHT_HPP
