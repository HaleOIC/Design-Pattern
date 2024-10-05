#ifndef CONCRETEHANDLER1_HPP
#define CONCRETEHANDLER1_HPP

#include "Handler.hpp"
#include <iostream>

class ConcreteHandler1 : public Handler
{
  public:
    void handleRequest(int request) override
    {
        if (request < 10) {
            std::cout << "ConcreteHandler1 handled request " << request << std::endl;
        } else if (successor) {
            successor->handleRequest(request);
        }
    }
};

#endif // CONCRETEHANDLER1_HPP
