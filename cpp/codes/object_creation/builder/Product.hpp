#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

class Product
{
  public:
    void addPart(const std::string &part)
    {
        parts += part + " ";
    }
    std::string getParts() const
    {
        return parts;
    }

  private:
    std::string parts;
};

#endif // PRODUCT_HPP
