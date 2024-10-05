#include "ConcreteHandler1.hpp"
#include "ConcreteHandler2.hpp"
#include <memory>

int main()
{
    auto handler1 = std::make_shared<ConcreteHandler1>();
    auto handler2 = std::make_shared<ConcreteHandler2>();

    handler1->setSuccessor(handler2);

    int requests[] = {5, 20, 15, 2, 8};

    for (int request : requests) {
        handler1->handleRequest(request);
    }

    return 0;
}
