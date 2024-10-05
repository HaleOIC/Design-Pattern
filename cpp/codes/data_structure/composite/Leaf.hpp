#ifndef LEAF_HPP
#define LEAF_HPP

#include "Component.hpp"

class Leaf : public Component
{
  public:
    void Operation() override
    {
        std::cout << "Leaf operation\n";
    }
};

#endif // LEAF_HPP
