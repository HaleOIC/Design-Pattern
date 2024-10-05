#ifndef OBJECTSTRUCTURE_HPP
#define OBJECTSTRUCTURE_HPP

#include "Element.hpp"
#include <vector>

class ObjectStructure
{
  private:
    std::vector<Element *> elements;

  public:
    void addElement(Element *element)
    {
        elements.push_back(element);
    }

    void accept(Visitor *visitor)
    {
        for (auto &element : elements) {
            element->accept(visitor);
        }
    }
};

#endif // OBJECTSTRUCTURE_HPP
