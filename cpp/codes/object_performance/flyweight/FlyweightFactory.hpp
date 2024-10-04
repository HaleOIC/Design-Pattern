#ifndef FLYWEIGHT_FACTORY_HPP
#define FLYWEIGHT_FACTORY_HPP

#include "ConcreteFlyweight.hpp"
#include "Flyweight.hpp"
#include <memory>
#include <string>
#include <unordered_map>

class FlyweightFactory
{
  public:
    std::shared_ptr<Flyweight> getFlyweight(const std::string &key)
    {
        auto it = flyweights_.find(key);
        if (it != flyweights_.end()) {
            return it->second;
        } else {
            auto flyweight = std::make_shared<ConcreteFlyweight>(key);
            flyweights_[key] = flyweight;
            return flyweight;
        }
    }

  private:
    std::unordered_map<std::string, std::shared_ptr<Flyweight>> flyweights_;
};

#endif // FLYWEIGHT_FACTORY_HPP
