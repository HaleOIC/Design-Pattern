#ifndef COMPOSITE_HPP
#define COMPOSITE_HPP

#include "Component.hpp"
#include <algorithm> // Include this for std::remove
#include <vector>

class Composite : public Component
{
  private:
    std::vector<Component *> children_;

  public:
    ~Composite()
    {
        for (Component *child : children_) {
            delete child;
        }
    }

    void Operation() override
    {
        std::cout << "Composite operation\n";
        for (Component *child : children_) {
            child->Operation();
        }
    }

    void Add(Component *component) override
    {
        children_.push_back(component);
    }

    void Remove(Component *component) override
    {
        children_.erase(std::remove(children_.begin(), children_.end(), component), children_.end());
    }

    Component *GetChild(int index) override
    {
        if (index < 0 || index >= children_.size()) {
            return nullptr;
        }
        return children_[index];
    }
};

#endif // COMPOSITE_HPP
