#ifndef CONCRETEHANDLER2_HPP
#define CONCRETEHANDLER2_HPP

#include "Handler.hpp"
#include <iostream>

class ConcreteHandler2 : public Handler
{
  public:
    void handleRequest(int request) override
    {
        if (request >= 10) {
            std::cout << "ConcreteHandler2 handled request " << request << std::endl;
        } else if (successor) {
            successor->handleRequest(request);
        }
    }
};

#endif // CONCRETEHANDLER2_HPP
