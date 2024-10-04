#include "Adapter.hpp"

int main()
{
    Adaptee *adaptee = new Adaptee();
    Target *target = new Adapter(adaptee);

    std::cout << "Adaptee: " << adaptee->specificRequest() << std::endl;
    std::cout << "Adapter: " << target->request() << std::endl;

    delete target;
    delete adaptee;

    return 0;
}
