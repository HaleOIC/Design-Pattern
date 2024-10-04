#ifndef CONCRETECREATOR_HPP
#define CONCRETECREATOR_HPP

#include "Creator.hpp"
#include "ConcreteProduct.hpp"

/**
 * @brief The ConcreteCreator class is a concrete class that implements
 */
class ConcreteCreator : public Creator {
public:
    std::unique_ptr<Product> factoryMethod() override {
        return std::make_unique<ConcreteProduct>();
    }
};

#endif // CONCRETECREATOR_HPP