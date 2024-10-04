#ifndef CONCRETE_BUILDER_HPP
#define CONCRETE_BUILDER_HPP

#include "Builder.hpp"
#include "Product.hpp"

class ConcreteBuilder : public Builder
{
  public:
    ConcreteBuilder() : product(new Product()) {}

    void buildPart() override
    {
        product->addPart("Part");
    }

    Product *getResult()
    {
        return product;
    }

  private:
    Product *product;
};

#endif // CONCRETE_BUILDER_HPP
