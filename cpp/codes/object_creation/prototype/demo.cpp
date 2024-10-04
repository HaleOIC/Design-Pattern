#include <iostream>
#include "ConcretePrototype.hpp"
#include "SubclassPrototype.hpp"

void clientCode(const Prototype& prototype) {
    Prototype* copy = prototype.clone();
    // Use the copy...
    delete copy;
}

int main() {
    ConcretePrototype prototype1(10);
    SubclassPrototype prototype2(20);

    clientCode(prototype1);
    clientCode(prototype2);

    return 0;
}
