#include "ConcreteElementA.hpp"
#include "ConcreteElementB.hpp"
#include "ConcreteVisitor1.hpp"
#include "ConcreteVisitor2.hpp"
#include "ObjectStructure.hpp"

int main()
{
    ObjectStructure objectStructure;

    ConcreteElementA elementA;
    ConcreteElementB elementB;

    objectStructure.addElement(&elementA);
    objectStructure.addElement(&elementB);

    ConcreteVisitor1 visitor1;
    ConcreteVisitor2 visitor2;

    objectStructure.accept(&visitor1);
    objectStructure.accept(&visitor2);

    return 0;
}
