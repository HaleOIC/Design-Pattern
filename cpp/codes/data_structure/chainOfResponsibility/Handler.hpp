#ifndef HANDLER_HPP
#define HANDLER_HPP

#include <memory>

class Handler
{
  protected:
    std::shared_ptr<Handler> successor;

  public:
    virtual ~Handler() {}
    void setSuccessor(std::shared_ptr<Handler> next)
    {
        successor = next;
    }
    virtual void handleRequest(int request) = 0;
};

#endif // HANDLER_HPP
