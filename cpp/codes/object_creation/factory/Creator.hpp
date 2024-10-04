#ifndef CREATOR_HPP
#define CREATOR_HPP

#include "Product.hpp"
#include <memory>

class Creator {
public:
    virtual std::unique_ptr<Product> factoryMethod() = 0;

    void anOperation() {
        auto product = factoryMethod();
        product->use();
    }

    virtual ~Creator() = default;
};

#endif // CREATOR_HPP