#ifndef PRODUCT_HPP
#define PRODUCT_HPP

/**
 * @brief The Product class is an abstract class that defines
 * the interface for the products that the factory method will create.
 */
class Product
{
  public:
    virtual void use() = 0;
    virtual ~Product() = default;
};

#endif // PRODUCT_HPP
