#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "Builder.hpp"

class Director
{
  public:
    void construct(Builder *builder)
    {
        builder->buildPart();
    }
};

#endif // DIRECTOR_HPP
